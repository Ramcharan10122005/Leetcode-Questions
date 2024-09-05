class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> ans;
        int s = rolls.size() + n;
        int sum = 0;
        for (auto num : rolls) {
            sum += num;
        }
        int req = (mean * s) - sum;
        if (req > (n * 6) || req < n)
            return ans;
        int k = req / n;
        for (int i = 0; i < n; i++) {
            ans.push_back(k);
        }
        if (k * n == req)
            return ans;
        int target = req - (k * n);
        int i = 0;
        while (target--) {
            ans[i]++;
            i++;
            if (i == n)
                i = 0;
        }
        return ans;
    }
};