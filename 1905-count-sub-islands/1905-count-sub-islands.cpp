class Solution {
public:
    bool dfs(int r, int c, vector<vector<int>>& visit, vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size(), n = grid1[0].size();
        if (r < 0 || c < 0 || r == m || c == n || grid2[r][c] == 0 || visit[r][c] != 0)
            return true;
        visit[r][c] = 1;
        bool res = true;
        if (grid1[r][c] == 0)
            res = false;
        res = dfs(r + 1, c, visit, grid1, grid2) && res;
        res = dfs(r - 1, c, visit, grid1, grid2) && res;
        res = dfs(r, c + 1, visit, grid1, grid2) && res;
        res = dfs(r, c - 1, visit, grid1, grid2) && res;
        return res;
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size(), n = grid1[0].size();
        vector<vector<int>> visit(m, vector<int>(n, 0));
        int ans = 0;
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (grid2[r][c] && visit[r][c] == 0 && dfs(r, c, visit, grid1, grid2))
                    ans++;
            }
        }
        return ans;
    }
};
