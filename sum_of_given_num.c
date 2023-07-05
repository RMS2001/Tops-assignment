#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = 0;
    int tempNumber = abs(number); 

    while (tempNumber > 0) {
        int digit = tempNumber % 10; 
        sum += digit; 
        tempNumber /= 10; 
    }

    if (number < 0) {
        sum = -sum; 
    }

    printf("Summation is %d\n", sum);

    return 0;
}
