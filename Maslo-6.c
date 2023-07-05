#include <stdio.h>
#include <math.h>

int vector_length_calc(int x1, int y1, int x2, int y2){
    int dx = pow(x2 - x1,2); // Calculate the squared difference in x-coordinates
    int dy = pow(y2 - y1,2); // Calculate the squared difference in y-coordinates

    float vector_length = sqrt(dx+dy); // Calculate the square root of the sum of squared differences
    printf("%.6f",vector_length); 

}

int main(){
    int x1, x2, y1, y2;
    printf("Enter x1, y1, x2, y2 \n");
    scanf("%d%d%d%d",&x1, &y1, &x2, &y2);
    vector_length_calc(x1,y1,x2,y2); 
}
