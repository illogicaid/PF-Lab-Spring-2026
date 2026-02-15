#include <stdio.h>

int main() {
    char c1, c2, c3, c4;
    int password;

    printf("Enter Username (4 characters): ");
    scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

    printf("Enter Password: ");
    scanf("%d", &password);

    if (c1 == 'u' && c2 == 's' && c3 == 'e' && c4 == 'r' && password == 7890) {
        printf("Connected Successfully\n");
    } else {
        printf("Connection Failed\n");
    }

    return 0;
}
