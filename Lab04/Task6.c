#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter marks for 5 subjects (0-100):\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100 || 
        m4 < 0 || m4 > 100 || m5 < 0 || m5 > 100) {
        printf("Invalid marks entered.\n");
        return 1;
    }

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 85) {
        printf("Full Scholarship\n");
    } else if (percentage >= 70) {
        printf("Partial Scholarship\n");
    } else if (percentage >= 50) {
        printf("Eligible for Consideration\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}
