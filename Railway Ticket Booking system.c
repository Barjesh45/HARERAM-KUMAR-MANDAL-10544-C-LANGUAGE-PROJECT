
#include <stdio.h>

#define TOTAL_SEATS 10   // Total number of seats

int main() {
    int seats[TOTAL_SEATS];
    int choice, seatNumber;

    // Step 2: Initialize all seats as available (0)
    for (int i = 0; i < TOTAL_SEATS; i++) {
        seats[i] = 0;
    }

    // Step 9: Repeat menu until user exits
    do {
        // Step 3: Display menu
        printf("\n--- Seat Booking System ---\n");
        printf("1. Book Seat\n");
        printf("2. Cancel Seat\n");
        printf("3. Show Seats\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        // Step 4: Get user choice
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            // Booking seat
            printf("Enter seat number (1 to %d): ", TOTAL_SEATS);
            scanf("%d", &seatNumber);

            if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
                printf("Invalid seat number!\n");
            }
            // Step 5: Check availability
            else if (seats[seatNumber - 1] == 0) {
                seats[seatNumber - 1] = 1; // Book seat
                printf("Seat %d booked successfully.\n", seatNumber);
            } else {
                printf("Seat %d is already booked.\n", seatNumber);
            }
            break;

        case 2:
            // Cancel seat
            printf("Enter seat number to cancel (1 to %d): ", TOTAL_SEATS);
            scanf("%d", &seatNumber);

            if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
                printf("Invalid seat number!\n");
            }
            // Step 6: Check if booked
            else if (seats[seatNumber - 1] == 1) {
                seats[seatNumber - 1] = 0; // Make seat available
                printf("Seat %d cancelled successfully.\n", seatNumber);
            } else {
                printf("Seat %d is already available.\n", seatNumber);
            }
            break;

        case 3:
            // Step 8: Display seat status
            printf("\nSeat Status:\n");
            for (int i = 0; i < TOTAL_SEATS; i++) {
                printf("Seat %d: %s\n", i + 1,
                       seats[i] == 0 ? "Available" : "Booked");
            }
            break;

        case 4:
            // Step 10: Exit program
            printf("Exiting program. Thank you!\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
