#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00;
    float amount;

    printf("1. Balance Inquiry\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Current Balance: %.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance) {
                printf("Insufficient funds.\n");
            } else if (amount <= 0) {
                printf("Invalid amount.\n");
            } else {
                balance -= amount;
                printf("Withdrawal successful. New Balance: %.2f\n", balance);
            }
            break;
        case 3:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid amount.\n");
            } else {
                balance += amount;
                printf("Deposit successful. New Balance: %.2f\n", balance);
            }
            break;
        case 4:
            printf("Exiting system.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
