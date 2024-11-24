int countOccurrences(int arr[], int n, int target) {
    int first = findFirstOccurrence(arr, n, target);
    if (first == -1) {
        return 0;
    }
    int last = findLastOccurrence(arr, n, target);
    return last - first + 1;
}
