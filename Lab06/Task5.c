#include <stdio.h>

int main() {
    float temp, sum = 0.0;
    int count = 0;
    
    printf("Enter temperatures (enter -999 to stop):\n");
    printf("Reading: ");
    scanf("%f", &temp);
    
    while (temp != -999) {
        sum += temp;
        count++;
        printf("Reading: ");
        scanf("%f", &temp);
    }
    
    if (count > 0) {
        printf("Average temperature: %.2f\n", sum / count);
    } else {
        printf("No valid temperatures entered.\n");
    }
    return 0;
}
