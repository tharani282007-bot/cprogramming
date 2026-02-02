#include <stdio.h>
struct Employee {
    int id;
    float salary;
};

int main() {
    struct Employee employees[3];
    int i;
    printf("Enter details for 3 employees:\n");
    for (i = 0; i < 3; i++) {
        printf("Employee %d ID: ", i + 1);
        
        scanf("%d", &employees[i].id);

        printf("Employee %d Salary: ", i + 1);
        
        scanf("%f", &employees[i].salary);
    }

    printf("\nDisplaying Employee Details:\n");

   
    for (i = 0; i < 3; i++) {
        printf("Employee %d\n", i + 1);
        
        printf("  ID: %d\n", employees[i].id);
        printf("  Salary: %.2f\n", employees[i].salary); 
    }

    return 0;
}