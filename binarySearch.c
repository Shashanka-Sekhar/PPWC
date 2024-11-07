#include <stdio.h>
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {0, 2, 3, 7, 9, 86};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found in the array\n");
    }
    return 0;
}
