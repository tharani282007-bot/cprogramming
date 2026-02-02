#include <stdio.h>


struct Department {
    int deptId;
    char deptName[30];
};


struct Employee {
    int empId;
    char empName[30];
    struct Department dept;   
};

int main() {
    struct Employee e;
    struct Employee *ptr;         
    ptr = &e;                     
    printf("Enter Employee ID: ");
    scanf("%d", &ptr->empId);

    printf("Enter Employee Name: ");
    scanf("%s", ptr->empName);

    printf("Enter Department ID: ");
    scanf("%d", &ptr->dept.deptId);

    printf("Enter Department Name: ");
    scanf("%s", ptr->dept.deptName);

   
    printf("\n--- Employee Details ---\n");
    printf("Employee ID   : %d\n", ptr->empId);
    printf("Employee Name : %s\n", ptr->empName);
    printf("Department ID : %d\n", ptr->dept.deptId);
    printf("Department    : %s\n", ptr->dept.deptName);

    return 0;
}
