#include <stdio.h>
struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};
void printCustomers(struct Customer customers[], int size) {
    for (int i = 0; i < size; i++) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

int main() {
    struct Customer customers[20];  
    printCustomers(customers, 20);

    return 0;
}