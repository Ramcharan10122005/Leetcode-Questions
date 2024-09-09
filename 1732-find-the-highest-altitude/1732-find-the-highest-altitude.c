int largestAltitude(int* g, int s) {
    int ans = 0, pref = 0;
    for (int i = 0; i < s; i++) {
        pref += g[i];
        ans = fmax(ans, pref);
    }
    return ans;
}