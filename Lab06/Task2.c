#include <stdio.h>

int main() {
    float balance = 5000.0;
    float withdrawal;
    
    printf("Starting balance: $%.2f\n", balance);
    
    while (balance > 0) {
        printf("Enter withdrawal amount: ");
        scanf("%f", &withdrawal);
        balance -= withdrawal;
        
        if (balance > 0) {
            printf("Remaining balance: $%.2f\n", balance);
        } else {
            printf("Balance exhausted. Current balance: $%.2f\n", balance);
        }
    }
    return 0;
}
