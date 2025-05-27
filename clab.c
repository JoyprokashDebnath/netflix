#include <stdio.h>

int main() {
    int arr[100], n, search, i, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found in array.\n");

    return 0;
}