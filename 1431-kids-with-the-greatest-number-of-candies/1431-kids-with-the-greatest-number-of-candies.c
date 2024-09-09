/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* c, int s, int e, int* r) {
    int max = 0;
    for (int i = 0; i < s; i++) {
        max = fmax(max, c[i]);
    }
    *r = s;
    bool* ans = malloc(s * sizeof(bool));
    for (int i = 0; i < s; i++) {
        if (c[i] + e >= max)
            ans[i] = true;
        else
            ans[i] = false;
    }
    return ans;
}