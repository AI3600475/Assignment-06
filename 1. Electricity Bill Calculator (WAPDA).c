#include <stdio.h>
#include <conio.h>

float calculateBill(int units){
float total_bill_amount;

if (units <= 100){
total_bill_amount = units * 18; // Rate for 1 - 100 units
} else if (units <= 200){
total_bill_amount = units * 22; // Rate for 101 - 200 units
} else if (units <= 300){
total_bill_amount = units * 26; // Rate for 201 - 300 units
} else if (units <= 700){
total_bill_amount = units * 30; // Rate for 301 - 700 units
} else {
total_bill_amount = units * 35; // Rate for 700 above units
}

return total_bill_amount;

}

int main(){
int units;

printf("enter the number of units:");
scanf("%d",&units);

float total_bill_amount = calculateBill(units);

printf("The Total Bill amount is : %f", total_bill_amount);
getch();
return 0; 

}