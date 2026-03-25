class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        long long total = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                total += grid[i][j];
            }
        }
        if (total % 2 != 0)
            return false;
        long long target_sum = total / 2;
        long long current_sum = 0;
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n; j++) {
                current_sum += grid[i][j];
            }
            if (current_sum == target_sum)
                return true;
        }
        current_sum = 0;
        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < m; i++) {
                current_sum += grid[i][j];
            }
            if (current_sum == target_sum)
                return true;
        }
        return false;
    }
};