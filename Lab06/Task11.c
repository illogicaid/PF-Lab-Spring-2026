#include <stdio.h>

int main() {
    float price, total = 0.0;
    int choice;
    
    do {
        printf("Enter the price of the product: ");
        scanf("%f", &price);
        total += price;
        
        printf("Add another product? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice == 1);
    
    if (total > 5000) {
        printf("Original Bill: $%.2f\n", total);
        total = total * 0.95;
        printf("5%% Discount Applied!\n");
    }
    
    printf("Final payable amount: $%.2f\n", total);
    return 0;
}
