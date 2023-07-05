#include <stdio.h>
#include <stdlib.h>

int findMaxDigit(int number) {
    int maxDigit = 0;

   
    number = abs(number);

    while (number > 0) {
        int digit = number % 10;

        
        if (digit > maxDigit) {
            maxDigit = digit;
        }

        number /= 10;
    }

    return maxDigit;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int maxDigit = findMaxDigit(number);

    printf("Max digit is %d\n", maxDigit);

    return 0;
}
