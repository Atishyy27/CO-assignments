#include <stdio.h>

int searchElement(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = searchElement(arr, n, key);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
