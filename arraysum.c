#include <stdio.h>
int main() {
    int arr[100], n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("The sum of array elements is: %d\n", sum);
    printf("Program successfully completed. Output obtained.\n");
    return 0;
}
