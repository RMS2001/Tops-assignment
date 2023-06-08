#include <stdio.h>

int main() {
    float principle, rate, time, simpleInterest;

    // Prompt the user to enter values
    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principle * rate * time) / 100;

    // Display the result
    printf("Simple Interest: %f\n", simpleInterest);

    return 0;
}