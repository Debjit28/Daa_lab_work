int findCeil(int arr[], int n, int target) {
    int low = 0, high = n - 1, ceil = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return arr[mid];
        }
        if (arr[mid] > target) {
            ceil = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ceil;
}
