#include <stdio.h>
#include <conio.h>

// Function To Calculate Zakat
float calculateZakat(float totalWealth, float goldRate) {
    // Define the Nisab Threshold in grams 
    const float nisabGold = 87.48;
    // Define the Zakat Rate
    const float zakatRate = 2.5;

    // Calculate the Nisab Threshold in PKR
    float nisabPKR = nisabGold * goldRate;

    // Check if the total wealth meets the Nisab Threshold
    if (totalWealth >= nisabPKR) {
        // Calculate the Zakat Payable
        float zakatPayable = totalWealth * (zakatRate / 100); 
        return zakatPayable;
    } else {
        return 0;
    }    
} 

int main () {
    // Ask the user to enter current gold rate
    float goldRate;
    printf("Enter the current gold rate in PKR per gram: ");
    scanf("%f", &goldRate);

    // Ask the user to enter the total wealth
    float totalWealth;
    printf("Enter the total wealth in PKR : ");
    scanf("%f", &totalWealth);

    // Calculate the Zakat Payable
    float zakatPayable = calculateZakat(totalWealth, goldRate);

    // Print the result
    if (zakatPayable > 0) {
        printf("Zakat Payable: %.2f PKR\n", zakatPayable);
    } else {
        printf("No Zakat Payable.\n");
    }
    
    getch();
}
