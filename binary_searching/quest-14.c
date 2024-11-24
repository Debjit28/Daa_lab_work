void findKClosest(int arr[], int n, int k, int target) {
    int low = 0, high = n - 1;
    while (high - low >= k) {
        if (abs(arr[low] - target) > abs(arr[high] - target)) {
            low++;
        } else {
            high--;
        }
    }
    for (int i = low; i <= high; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
