#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int choice;
    double num1, num2;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Square\n6. Cube\n7. Square Root\n8. Power\n");
    printf("9. Absolute Value\n10. Modulus\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if ((choice >= 1 && choice <= 4) || choice == 8 || choice == 10) {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    } else if ((choice >= 5 && choice <= 7) || choice == 9) {
        printf("Enter one number: ");
        scanf("%lf", &num1);
    }

    switch (choice) {
        case 1:
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case 2:
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case 3:
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("Result: %.2lf\n", num1 / num2);
            }
            break;
        case 5:
            printf("Result: %.2lf\n", num1 * num1);
            break;
        case 6:
            printf("Result: %.2lf\n", num1 * num1 * num1);
            break;
        case 7:
            if (num1 < 0) {
                printf("Error: Square root of negative number\n");
            } else {
                printf("Result: %.2lf\n", sqrt(num1));
            }
            break;
        case 8:
            printf("Result: %.2lf\n", pow(num1, num2));
            break;
        case 9:
            printf("Result: %.2lf\n", fabs(num1));
            break;
        case 10:
            if ((int)num2 == 0) {
                printf("Error: Modulus by zero\n");
            } else {
                printf("Result: %d\n", (int)num1 % (int)num2);
            }
            break;
        default:
            printf("Invalid menu choice\n");
    }

    return 0;
}
