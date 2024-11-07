#include <stdio.h>
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 1, 0, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);
    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found in the array\n");
    }
    return 0;
}
