int minPathSum(int** grid, int s, int* cs) {
    int m = s, n = cs[0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0)
                continue;
            int up = INT_MAX, left = INT_MAX;
            if (i != 0)
                up = grid[i][j] + grid[i - 1][j];
            if (j != 0)
                left = grid[i][j] + grid[i][j - 1];

            grid[i][j] = fmin(up, left);
        }
    }
    return grid[m - 1][n - 1];
}