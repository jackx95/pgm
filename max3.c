#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest;
    printf("Enter three integer numbers separated by spaces: ");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter three integers.\n");
        return 1;
    } 
    largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    printf("The largest number among %d, %d, and %d is: %d\n", num1, num2, num3, largest);
    return 0;
}