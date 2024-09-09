int longestOnes(int* nums, int s, int k) {
    int l = 0, r = 0, max = 0, zeroes = 0;
    while (r < s) {
        if (nums[r] == 0)
            zeroes++;
        if (zeroes > k) {
            if (nums[l] == 0)
                zeroes--;
            l++;
        }
        if (zeroes <= k) {
            max = fmax(max, r - l + 1);
        }
        r++;
    }
    return max;
}