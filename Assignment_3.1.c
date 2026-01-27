#include <stdio.h>

int main() {
    int num, Prime = 1;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 1) {
        Prime = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}