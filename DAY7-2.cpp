#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] >= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

int quickSelect(int arr[], int low, int high, int k) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        if (pivotIndex == k - 1) {
            return arr[pivotIndex];
        } else if (pivotIndex > k - 1) {
            return quickSelect(arr, low, pivotIndex - 1, k);
        } else {
            return quickSelect(arr, pivotIndex + 1, high, k);
        }
    }
    return -1;
}

int findKthLargest(int* nums, int numsSize, int k) {
    if (k > 0 && k <= numsSize) {
        return quickSelect(nums, 0, numsSize - 1, k);
    }
    return -1;
}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int numsSize = sizeof(arr) / sizeof(arr[0]);
    int result = findKthLargest(arr, numsSize, k);
    printf("%d\n", result);
    return 0;
}
