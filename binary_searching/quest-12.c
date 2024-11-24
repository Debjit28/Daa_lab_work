int findSquareRoot(int num) {
    int low = 0, high = num, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long square = (long long)mid * mid;
        if (square == num) {
            return mid;
        }
        if (square < num) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
