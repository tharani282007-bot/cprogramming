#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[20];
    float mark;
};
int main() {
    struct student s1;
    printf("Enter the roll no:");
    scanf("%d",&s1.roll);
    printf("enter name:");
    scanf("%s",&s1.name);
    printf("enter mark:");
    scanf("%f",&s1.mark);
    
    printf("\n***STUDENT DETAIL***\n");
    printf("Roll No.:%d\n",s1.roll );
    printf("Name:%s\n",s1.name);
    printf("Mark:%f\n",s1.mark);
    
   
    return 0;
}