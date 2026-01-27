#include <stdio.h>

int main() {
    int number, exponent;
    long long result = 1;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the power: ");
    scanf("%d", &exponent);

    for(int i = 1; i <= exponent; i++) {
        result *= number;
    }

    printf("Result = %lld", result);

    return 0;
}