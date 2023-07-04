#include <stdio.h>

int main() {
    int number_of_numbers;
    printf("How many numbers would you like to calculate:\n");
    scanf("%d", &number_of_numbers);

    if(number_of_numbers<2||number_of_numbers>20){
        printf("Too much or too less numbers");
        return 0;
        }

    int numbers[number_of_numbers];
    printf("Enter numbers:\n ");
    for (int i = 0; i < number_of_numbers; i++) {
        scanf("%d", &numbers[i]);
    }

    int max_number = numbers[0];
    for (int i = 1; i < number_of_numbers; i++) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
    }

    int least_common_multiple = max_number;
    int found_least_common_multiple = 0;
    // found_least_common_multiple is used to determine whether the LCM has been found
    // 0 - has not yeat been found
    while (!found_least_common_multiple) { // work until found_least_common_multiple not equal to 0
        found_least_common_multiple = 1; // need to check if LCM found
        for (int i = 0; i < number_of_numbers; i++) {
            if (least_common_multiple % numbers[i] != 0) {
                found_least_common_multiple = 0;
                break;
                // loking if a LCM can be divide to our numbers 
            }
        }
        if (!found_least_common_multiple) {
            least_common_multiple += max_number;
        }
        // if LCM can be divide to other numbers - do nothing, if not yet - add bigger number to least_common_multiple
    }
    printf("The least common multiple: %d\n", least_common_multiple);
    return 0;
}
