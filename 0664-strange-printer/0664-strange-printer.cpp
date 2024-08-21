class Solution {
public:
    vector<vector<int>> dp;
    
    int solve(int l, int r, string &s) {
        if (l == r) return 1;
        if (l > r) return 0;
        if (dp[l][r] != -1) return dp[l][r];

        int i = l + 1;
        while (i <= r && s[i] == s[l]) i++;
        int ans = 1 + solve(i, r, s);

        for (int j = i; j <= r; j++) {
            if (s[j] == s[l]) {
                int temp = solve(i, j - 1, s) + solve(j, r, s);
                ans = min(ans, temp);
            }
        }

        return dp[l][r] = ans;
    }

    int strangePrinter(string s) {
        int n = s.size();
        dp.resize(n, vector<int>(n, -1));
        return solve(0, n - 1, s);
    }
};
