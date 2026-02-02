#include <stdio.h>
#include <stdlib.h>


struct Supplier {
    char supplierName[30];
    char supplierLocation[30];
};


struct Product {
    int productId;
    char productName[30];
    float productPrice;
    struct Supplier sup;  
};

int main() {
    struct Product *ptr;   

    
    ptr = (struct Product *)malloc(sizeof(struct Product));

    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    
    printf("Enter Product ID: ");
    scanf("%d", &ptr->productId);

    printf("Enter Product Name: ");
    scanf("%s", ptr->productName);

    printf("Enter Product Price: ");
    scanf("%f", &ptr->productPrice);

    printf("Enter Supplier Name: ");
    scanf("%s", ptr->sup.supplierName);

    printf("Enter Supplier Location: ");
    scanf("%s", ptr->sup.supplierLocation);


    printf("\n--- Product Details ---\n");
    printf("Product ID    : %d\n", ptr->productId);
    printf("Product Name  : %s\n", ptr->productName);
    printf("Product Price : %.2f\n", ptr->productPrice);
    printf("Supplier Name : %s\n", ptr->sup.supplierName);
    printf("Supplier Loc. : %s\n", ptr->sup.supplierLocation);

    free(ptr);

    return 0;
}
