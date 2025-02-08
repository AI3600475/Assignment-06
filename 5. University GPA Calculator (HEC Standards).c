#include <stdio.h>
#include <conio.h>

float calculateGPA(int marks) {
    if (marks >= 85) {
        return 4.0;
    } else if (marks >= 80) {
        return 3.7;
    } else if (marks >= 75) {
        return 3.3;
    } else if (marks >= 70) {
        return 3.0;
    } else if (marks >= 65) {
        return 2.7;
    } else if (marks >= 60) {
        return 2.3;
    } else {
        return 0.0; // Fail case
    }
}

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    float gpa = calculateGPA(marks);
    if (marks <= 59) {
        printf("You are fail\n");
    } else {
        printf("Your GPA is %.1f\n", gpa);
    }

    getchar();
    getch();
    return 0;
}