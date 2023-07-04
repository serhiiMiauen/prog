#include <stdio.h>

int countEqualDivisors(int number) {
    int count = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == number / i) {
            printf("%d\n",i);
            count++;
            // check if the remainder of dividing number by i is equal to the quotient of dividing number by i.
        }
    }
    return count;
}

int main() {
    int number;
    printf("Enter a natural number n: ");
    scanf("%d", &number);

    int equalDivisors = countEqualDivisors(number);
    printf("Number of equal divisors of a number of %d: %d\n", number, equalDivisors);

    return 0;
}
