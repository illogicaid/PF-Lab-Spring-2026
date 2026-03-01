#include <stdio.h>

int main() {
    int choice;
    float num1, num2;
    
    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1 || choice == 2) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            
            if (choice == 1) {
                printf("Result: %.2f\n", num1 + num2);
            } else {
                printf("Result: %.2f\n", num1 - num2);
            }
        } else if (choice != 3) {
            printf("Invalid choice. Please select 1, 2, or 3.\n");
        }
    } while (choice != 3);
    
    printf("Exiting calculator.\n");
    return 0;
}
