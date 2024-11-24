#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

void findKClosest(int arr[], int n, int x, int k) {
    int left, right;
    int pos = binarySearch(arr, n, x);
    left = pos - 1;
    right = pos;
    while (k > 0) {
        if (left >= 0 && (right >= n || x - arr[left] <= arr[right] - x)) {
            printf("%d ", arr[left--]);
        } else if (right < n) {
            printf("%d ", arr[right++]);
        }
        k--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3, k = 2;

    qsort(arr, n, compare);
    findKClosest(arr, n, x, k);

    return 0;
}
