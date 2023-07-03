#include <stdio.h>

float determining_the_total_time(int num1, int num2, int num3) {
    float t1 = 1.0 / num1, t2 = 1.0 / num2, t3 = 1.0 / num3;
    // how much they individually eat per hour
    printf("%f,%f,%f\n", t1, t2, t3);
    float sum = t1 + t2 + t3;
    // how much they eat together per hour
    float result = 1.0 / sum;
    // how time they need to eat this
    printf("%f\n", result);
    return result;
}

int main() {
    float t1, t2, t3;
    printf("Enter three times:\n ");
    scanf("%f%f%f", &t1, &t2, &t3);
    if (t1 > 10000 || t2 > 10000 || t3 > 10000) {
        printf("Wow! I can't even imagine this pie!\n");
        return 0;
    }
    float sumT = determining_the_total_time(t1, t2, t3);
    printf("They would eat this pie in %0.2f h.\n", sumT);
    return 0;
}