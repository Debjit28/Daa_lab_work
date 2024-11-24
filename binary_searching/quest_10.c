int countOnes(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0)) {
            return n - mid;
        }
        if (arr[mid] == 1) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return 0;
}
