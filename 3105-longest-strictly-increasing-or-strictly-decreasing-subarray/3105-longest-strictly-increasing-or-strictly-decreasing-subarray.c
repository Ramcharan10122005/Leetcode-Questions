int longestMonotonicSubarray(int* n, int s) {
    int maxLen = 1, incLen = 1, decLen = 1;
    for (int i = 1; i < s; i++) {
        if (n[i] > n[i - 1]) {
            incLen++;
            decLen = 1;
        } else if (n[i] < n[i - 1]) {
            decLen++;
            incLen = 1;
        } else {
            incLen = 1;
            decLen = 1;
        }
        maxLen = fmax(maxLen, fmax(incLen, decLen));
    }

    return maxLen;
}
