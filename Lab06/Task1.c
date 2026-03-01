#include <stdio.h>

int main() {
    int status, present_count = 0;
    
    printf("Enter attendance (1 for Present, 0 for Absent) for 30 students:\n");
    for (int i = 1; i <= 30; i++) {
        printf("Student %d: ", i);
        scanf("%d", &status);
        if (status == 1) {
            present_count++;
        }
    }
    
    printf("Total students present: %d\n", present_count);
    return 0;
}
