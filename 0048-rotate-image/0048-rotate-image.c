void rotate(int** m, int s, int* cs) {
    int l = 0, r = s - 1;
    while (l < r) {
        for (int i = 0; i < r - l; i++) {
            int t = l, b = r;
            int topleft = m[t][l + i];
            // move bottom left to top left
            m[t][l + i] = m[b - i][l];
            // move bottom right to bottom left
            m[b - i][l] = m[b][r - i];
            // move top right to bottom right
            m[b][r - i] = m[t + i][r];
            // move top left to top right
            m[t + i][r] = topleft;
        }
        l++;
        r--;
    }
}