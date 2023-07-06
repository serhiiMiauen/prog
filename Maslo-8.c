#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The number of anagrams of a 14-letter word can be up to 68,719,476,736 (about 2^36-2^37)
// Thats why we use long long int (64 bits)

long long int factorial_number(long long int  n) {
    if (n <= 1)
        return 1;
    return n * factorial_number(n - 1);
}
//  If n is less than or equal to 1, it returns 1. 
//  Otherwise, it recursively calls itself with n - 1 and multiplies the result by n.

int main() {
    char word[20];
    printf("Write a word to count count number of anagrams\n");
    scanf("%s", &word);
    int len = strlen(word);
//  Calculates the factorial of a given number n. 
//  It returns the factorial value. If n is less than or equal to 1, it returns 1.
//  Otherwise, it recursively calls itself with n - 1 and multiplies the result by n.

   if (len>14){
        printf("Too big word, try another\n");
        return 0;
    }

    long long int total_number_of_permutations = factorial_number(len);
    qsort(word, len, sizeof(char), strcmp);
    //   sorts the string in lexicographically ascending order.
    //   It takes the base address of the array (word), the length of the array (len),
    //   the size of each element (sizeof(char)), and a comparison function (strcmp) to perform the sorting.
    char b = '0';
    word[len] = b;
    //   This is necessary because the sorting operation modifies the original string and adds a null character at the end.
    int count = 1;
    for (int i = 0; i < len; i++) {
        if (word[i] == word[i + 1])
            count++;
            //   checks if the current character is equal to the next character. If they are the same, it increments the count variable.
        else {
            total_number_of_permutations /= factorial_number(count);
            count = 1;
            // executes when the current character is different from the next character. It divides total_number_of_permutations by the factorial of count and resets count to 1.
        }
    }
    printf("%lld", total_number_of_permutations);
    return 0;
}
