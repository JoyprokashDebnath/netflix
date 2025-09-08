#include <stdio.h>
#include <math.h>

// simple bubble sort
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements in the set: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // sort array first
    sort(arr, n);

    int total = pow(2, n);
    printf("Subsets of size 2 or more (in increasing order):\n");

    for (int mask = 0; mask < total; mask++) {
        int count = 0;

        // count size of subset
        for (int j = 0; j < n; j++) {
            if (mask & (1 << j))
                count++;
        }

        if (count >= 2) {
            printf("{ ");
            for (int j = 0; j < n; j++) {
                if (mask & (1 << j))
                    printf("%d ", arr[j]);
            }
            printf("}\n");
        }
    }

    return 0;
}
