int subsetXORSum(int* nums, int numsSize) {
    int or = 0, n = numsSize;
    for (int i = 0; i < n; i++) {
        or |= nums[i];
    }
    return (or) * pow(2, n - 1);//pow(2,n-1)=(1<<(n-1))
}