#include <stdio.h>


struct Address {
    char city[30];
    int pincode;
};


struct Student {
    int id;
    char name[30];
    struct Address addr;   
};

int main() {
    struct Student s;          
    struct Student *ptr;

    ptr = &s;                 


    printf("Enter Student ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Student Name: ");
    scanf("%s", ptr->name);

    printf("Enter City: ");
    scanf("%s", ptr->addr.city);

    printf("Enter Pincode: ");
    scanf("%d", &ptr->addr.pincode);


    printf("\n--- Student Details ---\n");
    printf("Student ID   : %d\n", ptr->id);
    printf("Student Name : %s\n", ptr->name);
    printf("City         : %s\n", ptr->addr.city);
    printf("Pincode      : %d\n", ptr->addr.pincode);

    return 0;
}
