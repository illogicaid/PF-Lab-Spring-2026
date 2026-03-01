#include <stdio.h>

int main() {
    int available_seats = 40;
    int action;
    
    printf("Bus Seat Reservation System\n");
    
    while (available_seats > 0) {
        printf("\nEnter 1 to book a seat, 0 to stop reservations: ");
        scanf("%d", &action);
        
        if (action == 0) {
            printf("Reservation stopped by operator.\n");
            break;
        } else if (action == 1) {
            available_seats--;
            printf("Seat booked successfully.\n");
            printf("Remaining seats: %d\n", available_seats);
        } else {
            printf("Invalid input.\n");
        }
    }
    
    if (available_seats == 0) {
        printf("All seats are fully booked!\n");
    }
    
    return 0;
}
