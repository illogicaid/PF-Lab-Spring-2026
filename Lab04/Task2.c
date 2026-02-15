#include <stdio.h>

int main() {
    float data_used;

    printf("Enter total data usage (GB): ");
    scanf("%f", &data_used);

    if (data_used < 0) {
        printf("Invalid input.\n");
    } else if (data_used <= 50) {
        printf("Basic User\n");
    } else if (data_used <= 150) {
        printf("Standard User\n");
    } else {
        printf("Heavy User\n");
    }

    return 0;
}
