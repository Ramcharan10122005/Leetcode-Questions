int maxSubArray(int* n, int s) {
    int max = INT_MIN;
    int temp = 0;

    for (int i = 0; i < s; i++) {
        temp += n[i];
        if (temp > max)
            max = temp;
        if (temp < 0)
            temp = 0;
    }
    return max;
}