class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        int ps = 0;
        int res = INT_MAX;
        vector<int> dp(n, INT_MAX);

        int l = 0;
        for (int r = 0; r < n; r++) {
            ps += arr[r];
            while (ps > target) {
                ps -= arr[l];
                l += 1;
            }
            if (r - 1 >= 0)
                dp[r] = dp[r - 1];
            else
                dp[r] = INT_MAX;
            if (ps == target) {
                int temp;
                if (l - 1 >= 0)
                    temp = dp[l - 1];
                else
                    temp = INT_MAX;
                if (temp != INT_MAX) {
                    res = min(res, (r - l + 1) + temp);
                }
                dp[r] = min(dp[r], r - l + 1);
            }
        }
        if (res == INT_MAX)
            return -1;
        return res;
    }
};