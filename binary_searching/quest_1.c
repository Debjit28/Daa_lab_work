int countRotations(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid > 0 && arr[mid] < arr[mid - 1]) {
            return mid;
        }
        if (arr[mid] > arr[high]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}
