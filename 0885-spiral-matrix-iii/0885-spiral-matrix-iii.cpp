class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart,int cStart) {
        int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        vector<vector<int>> ans;
        int r = rStart, c = cStart, m = rows, n = cols;
        int i = 0, steps = 1;
        while (ans.size() < m * n) {
            for (int a = 0; a < 2; a++) {
                int dr = dir[i][0], dc = dir[i][1];
                for (int k = 0; k < steps; k++) {
                    if ((r >= 0 && r < m) && (c >= 0 && c < n))
                        ans.push_back({r, c});
                    r += dr;
                    c += dc;
                }
                i = (i + 1) % 4;
            }
            steps++;
        }
        return ans;
    }
};