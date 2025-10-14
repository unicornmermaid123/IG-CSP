//IG 6th time of day 
#include <stdio.h>
int main() {
    int hour;
    char choice;

    printf("Do you want to use the current time? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        time_t currentTime;
        struct tm *localTime;

        time(&currentTime);
        localTime = localtime(&currentTime);
        hour = localTime->tm_min;  // Mistake: should be tm_hour
        printf("Current hour is: %d\n", hour);
    } else {
        printf("What is the hour in military time (0-23)? ");
        scanf("%d", &hour);
    }

    if (hour >= 0 && hour < 12) {
        printf("Good Morning!\n");
    } else if (hour >= 12 && hour < 17) {
        printf("Good Afternoon!\n");
    } else if (hour >= 17 && hour <= 23) {
        printf("Good Evening!\n");
    } else {
        printf("Invalid hour entered. Please enter a value between 0 and 23.\n");
    }

    return 0;
}
