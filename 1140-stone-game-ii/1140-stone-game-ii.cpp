class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(n + 1, vector<int>(2, -1)));
        return dfs(1, 0, 1, piles, dp);
    }

    int dfs(bool alice, int i, int M, vector<int>& piles,
            vector<vector<vector<int>>>& dp) {
        if (i == piles.size())
            return 0;
        if (dp[i][M][alice] != -1)
            return dp[i][M][alice];

        int res = alice ? 0 : INT_MAX;
        int total = 0;

        for (int X = 1; X <= 2 * M && i + X <= piles.size(); X++) {
            total += piles[i + X - 1];
            if (alice) {
                res =
                    max(res, total + dfs(!alice, i + X, max(M, X), piles, dp));
            } else {
                res = min(res, dfs(!alice, i + X, max(M, X), piles, dp));
            }
        }

        return dp[i][M][alice] = res;
    }
};
