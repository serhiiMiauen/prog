#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int number_of_intersection_points(int x1, int y1, int r1, int x2, int y2, int r2) {
    int d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // Calculate the distance between the centers of the circles

    int r = r1 - r2, R = r1 + r2;
    // Calculate the difference and sum of the radii
    int n;

    if (r < 0) {
        r = abs(r1 - r2);  // Absolute difference of radii
    }

    if (r > d && d > R) {
        n = 0;  // No intersection points
    } else if (r < d && d < R) {
        n = 2;  // Two intersection points
    } else {
        n = 1;  // One intersection point 
    }

    printf("%d", r);
    // return n;
}

// Main function
int main() {
    int x1, y1, r1, x2, y2, r2;

    printf("Enter x1, y1, r1, x2, y2, r2\nWhere x1, y1, x2, y2 are coordinates, r1, r2 - radius\n");
    scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);

    number_of_intersection_points(x1, y1, r1, x2, y2, r2);

    return 0;
}
