#include <stdio.h>
#include <conio.h>

float convertCurrency(float amount, char currencyType) {
    float exchangeRate;
    
    printf("Enter the exchange rate for %c to PKR: ", currencyType);
    scanf("%f", &exchangeRate);
    
    return amount * exchangeRate;
}

int main() {
    float amount;
    char currencyType;

    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("Enter currency type (U for USD, S for SAR, A for AED): ");
    scanf(" %c", &currencyType);

    float result = convertCurrency(amount, currencyType);
    printf("PKR = %.2f\n", result);

    getch();
    return 0;
}