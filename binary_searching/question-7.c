int findFloor(int arr[], int n, int target) {
    int low = 0, high = n - 1, floor = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return arr[mid];
        }
        if (arr[mid] < target) {
            floor = arr[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return floor;
}
