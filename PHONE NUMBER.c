#include <stdio.h>
#include <stdlib.h>

struct Contact {
    long long phone;
};

struct Customer {
    int accNo;
    struct Contact contact;
    struct Customer *next;
};

int main() {
    struct Customer *cust1, *cust2;

    cust1 = (struct Customer *)malloc(sizeof(struct Customer));
    cust2 = (struct Customer *)malloc(sizeof(struct Customer));

    cust1->accNo = 101;
    cust1->contact.phone = 9876543210;
    cust1->next = cust2;

    cust2->accNo = 102;
    cust2->contact.phone = 9123456789;
    cust2->next = NULL;

    struct Customer *temp = cust1;
    while (temp != NULL) {
        printf("%d - %lld -> ", temp->accNo, temp->contact.phone);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
