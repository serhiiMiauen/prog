#include <stdio.h>

int countSequences(int number) {

    int dp[number+ 1];
    dp[0] = 1; // empty sequence
    dp[1] = 2; // 0 or 1
    dp[2] = 4; // 00, 01, 10, 11

    for (int i = 3; i <= number; i++) {
        // start from i = 3 up to number to fill in the remaining values of the dp array
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 12345;
    }


    return dp[number];
}

int main() {
    int number;
    printf("Enter the length of sequence n: ");
    scanf("%d", &number);

    if(number<0||number>10000){
        printf("Tey other number");
        return 0;
    }

    int count = countSequences(number);

    printf("The number of valid sequences: %d\n", count);

    return 0;
}
