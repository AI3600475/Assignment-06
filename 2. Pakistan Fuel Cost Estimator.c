#include <stdio.h>
#include <conio.h>

// Funtion to Calculate the fuel cost
float calculateFuelCost(float distance, float fuelAverage, float fuelPrice){
    return (distance / fuelAverage) * fuelPrice;
}


int main(){
float distance, fuelAverage, fuelPrice;

    // Enter the distance , fuel average and fuel price
    printf("Enter the distance (In Kilometers)");
    scanf("%f", &distance);

    printf("Enter fuel average (km/liters)");
    scanf("%f", &fuelAverage);

    printf("Enter the fuel price (Rs/liter)");
    scanf("%f", &fuelPrice);

    // Calculate the fuel cost
    float fuelCost = calculateFuelCost(distance, fuelAverage, fuelPrice);
     
    // Print the fuel cost
    printf("The fuel cost is: %.2f Rs\n", fuelCost);

    getch();
    return 0;
}
