int maxOperations(int* n, int s) {
    int score = n[0] + n[1];
    int ans = 1;
    for (int i = 2; i < s - 1; i += 2) {
        if (n[i] + n[i + 1] == score) {
            ans++;
        } else
            return ans;
    }
    return ans;
}