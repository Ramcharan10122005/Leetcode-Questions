class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int rows = INT_MAX, cols = INT_MAX;
        int m = grid.size(), n = grid[0].size();

        int rowFlips = 0;
        for (int i = 0; i < m; i++) {
            int k = 0, l = n - 1;
            int count = 0;
            while (k < l) {
                if (grid[i][k] != grid[i][l]) {
                    count++;
                }
                k++;
                l--;
            }
            rowFlips += count;
        }
        rows = min(rows, rowFlips);

        int colFlips = 0;
        for (int i = 0; i < n; i++) {
            int k = 0, l = m - 1;
            int count = 0;
            while (k < l) {
                if (grid[k][i] != grid[l][i]) {
                    count++;
                }
                k++;
                l--;
            }
            colFlips += count;
        }
        cols = min(cols, colFlips);
        return min(rows, cols);
    }
};
