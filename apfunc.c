#include <stdio.h>

int area(int length, int width);
int perimeter(int length, int width);

int main() {
    int l, w, a, p;
    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &l, &w);
    a = area(l, w);
    p = perimeter(l, w);
    printf("Area = %d\n", a);
    printf("Perimeter = %d\n", p);
    return 0;
}
int area(int length, int width) {
    return length * width;
}
int perimeter(int length, int width) {
    return 2 * (length + width);
}
