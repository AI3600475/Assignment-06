#include <stdio.h>
#include <conio.h>

// Function to calculate remaining balance after the tax deduction
float remainingBalance(float amount) {
    // Define tax rate
    const float FED_RATE = 0.195; // 19.5% Federal Excise Duty
    const float STATE_RATE = 0.10; // 10% State Charges

    // Calculate total tax
    float totalTax = (amount * FED_RATE) + (amount * STATE_RATE);

    // Calculate remaining balance
    float remainingBalance = amount - totalTax;

    return remainingBalance;
}

int main() {
    float rechargeAmount; // Recharge amount in PKR
    
    printf("Enter a amount :");
    scanf("%f",&rechargeAmount);

    float availableBalance = remainingBalance(rechargeAmount);

    printf("Recharge Amount : %.2f PKR\n", rechargeAmount);
    printf("Available Balance : %.2f PKR\n", availableBalance);

    getch();
    return 0;
}