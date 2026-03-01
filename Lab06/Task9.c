#include <stdio.h>

int main() {
    int n,i, total_items = 0;
    
    printf("Enter the number of boxes N: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        total_items += i;
    }
    
    printf("Total decorative items required: %d\n", total_items);
    return 0;
}
