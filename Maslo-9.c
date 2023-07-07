#include <stdio.h>

int minSteps(int x, int y) {
    int distance = y - x; 
    if (distance <= 2)  
        return distance;

    int steps = 2; 
    int diff = 2; 
    int remaining = distance - 2; // Remaining distance after considering the first and last steps

    while (remaining > 0) {
        if (remaining >= diff) { // check if programm can take another step
            steps++; 
            remaining -= diff; // After taking a step, the remaining distance is reduced by the length of the step
        }
        diff++; 
    }

    return steps; ps
}

int main() {
    int x, y;
    printf("Enter the starting integer (x): ");
    scanf("%d", &x);
    printf("Enter the target integer (y): ");
    scanf("%d", &y);

    int result = minSteps(x, y); 
    printf("Minimum number of steps: %d\n", result);

    return 0;
}
