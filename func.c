#include <stdio.h>
int main() {
    int left, right, n, mid, num, arr[10], i;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    printf("enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter the number you want to search: ");
    scanf("%d", &num);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == num) {
            printf("The element is found at index %d\n", mid);
            break; // Exit the loop when the element is found.
        } else if (num < arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (left > right) {
        printf("The element is not found in the array.\n");
    }

    return 0;
}
