#include <stdio.h>

int main() {
    int score;
    int distinction = 0, pass = 0, fail = 0;
    
    printf("Enter student scores (0-100). Enter -1 to stop.\n");
    printf("Score: ");
    scanf("%d", &score);
    
    while (score != -1) {
        if (score >= 75 && score <= 100) {
            distinction++;
        } else if (score >= 50 && score < 75) {
            pass++;
        } else if (score >= 0 && score < 50) {
            fail++;
        } else {
            printf("Invalid score. Please enter between 0 and 100.\n");
        }
        
        printf("Score: ");
        scanf("%d", &score);
    }
    
    printf("\n Results \n");
    printf("Distinction: %d\n", distinction);
    printf("Pass: %d\n", pass);
    printf("Fail: %d\n", fail);
    
    return 0;
}
