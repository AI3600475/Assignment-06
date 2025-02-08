#include <stdio.h>
#include <conio.h>

float calculateIncomeTax(float salary) {
    float tax = 0.0;

    if (salary <= 600000) {
        tax = 0;
    } else if (salary > 600000 && salary <= 1200000) {
        tax = (salary) * 0.025;
    } else if (salary > 1200000 && salary <= 2400000) {
        tax = (salary) * 0.125;
    } else if (salary > 2400000 && salary <= 3600000) {
        tax = (salary) * 0.20;
    } else if (salary > 3600000){
        tax = (salary) * 0.30;
    }

    return tax;
}

int main() {
    float monthlySalary;
    printf("Enter monthly salary (PKR): ");
    scanf("%f", &monthlySalary);
    
    float annualSalary = monthlySalary * 12;
    float tax = calculateIncomeTax(annualSalary);
    
    printf("Annual Tax = %.2f PKR\n", tax);
    
    getch();
    return 0;
}