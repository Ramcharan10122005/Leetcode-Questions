int* productExceptSelf(int* n, int s, int* re) {
    *re = s;
    int* ans = malloc(s * sizeof(int));
    int* l = malloc(s * sizeof(int));
    int* r = malloc(s * sizeof(int));
    l[0] = 1;
    r[s - 1] = 1;
    for (int i = 1; i < s; i++) {
        l[i] = l[i - 1] * n[i - 1];
    }
    for (int i = s - 2; i >= 0; i--) {
        r[i] = r[i + 1] * n[i + 1];
    }
    for (int i = 0; i < s; i++) {
        ans[i] = l[i] * r[i];
    }
    return ans;
}