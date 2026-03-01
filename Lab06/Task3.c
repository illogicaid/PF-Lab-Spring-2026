#include <stdio.h>

int main() {
    int password;
    
    do {
        printf("Enter the password: ");
        scanf("%d", &password);
        
        if (password != 1234) {
            printf("Incorrect. Try again.\n");
        }
    } while (password != 1234);
    
    printf("Access granted!\n");
    return 0;
}
