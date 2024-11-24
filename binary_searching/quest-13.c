int divide(int dividend, int divisor) {
    if (divisor == 0) return -1;  // Division by zero
    int low = 0, high = dividend, result = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid * divisor <= dividend) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
