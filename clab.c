#include <stdio.h>
#include <math.h>

// sort array
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

// remove duplicates, return new size
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n;

    int temp[n];
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];

    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    return j; // new size
}

int main() {
    int n;
    printf("Enter number of elements in the set: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // sort and remove duplicates
    sort(arr, n);
    n = removeDuplicates(arr, n);

    int total = pow(2, n);
    printf("Unique subsets of size 2 or more:\n");

    for (int mask = 0; mask < total; mask++) {
        int count = 0;
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