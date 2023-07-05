#include <stdio.h>

int main() {
    int p;
    printf("Enter the value of n: "); 
    scanf("%d", &p); 
    if(p<3||p>=31) {
        printf("Try another number (3-30)");

        return 0;
    }
    
    int a[p];
    a[0] = 2; 
    a[1] = 4; 
    // used for storing the first Fibonacci numbers (2 and 4) 

    // below Fibonacci numbers generator
    for (int i = 2; i < p; i++) {
        a[i] = a[i - 1] + a[i - 2]; 
    }
    
    printf("%d\n", a[p - 1]); // print the last element of array - which reprosent answer to task     
    return 0;
}
