#include <stdio.h>
#define PI 3.1416
float area(float radius);
float perimeter(float radius);
int main() {
    float r, a, p;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = area(r);
    p = perimeter(r);
    printf("Area of the circle = %.2f\n", a);
    printf("Perimeter (Circumference) of the circle = %.2f\n", p);
    printf("Program successfully completed. Output obtained.\n");
    return 0;
}
float area(float radius) {
    return PI * radius * radius;
}
float perimeter(float radius) {
    return 2 * PI * radius;
}
