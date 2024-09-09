double findMaxAverage(int* n, int s, int k) {
    int max = 0;
    double ans = 0;
    for (int i = 0; i < k; i++) {
        max += n[i];
    }
    ans = (double)max / k;

    for (int i = k; i < s; i++) {
        max = max - n[i - k] + n[i];
        double curr = (double)max / k;
        ans = fmax(ans, curr);
    }
    return ans;
}