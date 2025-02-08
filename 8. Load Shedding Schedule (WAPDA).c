#include <stdio.h>
#include <conio.h>

void showLoadSheddingSchedule(char city[]) {
    printf("Load Shedding Schedule for %s:\n", city);
    
    // Predefined load shedding times for demonstration
    const char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    const char* times[] = {
        "6 AM - 8 AM, 6 PM - 8 PM",
        "7 AM - 9 AM, 5 PM - 7 PM",
        "8 AM - 10 AM, 4 PM - 6 PM",
        "9 AM - 11 AM, 3 PM - 5 PM",
        "10 AM - 12 PM, 2 PM - 4 PM",
        "11 AM - 1 PM, 1 PM - 3 PM",
        "12 PM - 2 PM, 12 PM - 2 PM"
    };

    for (int i = 0; i < 7; i++) {
        printf("%s: %s\n", days[i], times[i]);
    }
}

int main() {
    char city[50];
    
    printf("Enter your city name: ");
    scanf("%s", city);
    
    showLoadSheddingSchedule(city);

    getch();
    return 0;
}