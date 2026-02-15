#include <stdio.h>

int main() {
    float purchase_amount, discount, final_amount;

    printf("Enter total purchase amount: ");
    scanf("%f", &purchase_amount);

    if (purchase_amount < 0) {
        printf("Invalid amount.\n");
        return 1;
    }

    if (purchase_amount >= 5000) {
        discount = purchase_amount * 0.20;
    } else if (purchase_amount >= 3000) {
        discount = purchase_amount * 0.10;
    } else {
        discount = 0;
    }

    final_amount = purchase_amount - discount;

    printf("Total Amount: %.2f\n", purchase_amount);
    printf("Discount: %.2f\n", discount);
    printf("Final Payable: %.2f\n", final_amount);

    return 0;
}
