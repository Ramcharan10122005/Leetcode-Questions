class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int s = rolls.size() + n; 
        int m_sum = 0, n_sum = 0;
        for (auto r : rolls) {
            m_sum += r;
        }
        n_sum = (mean * s) - m_sum;
        if (n_sum < n || n_sum > 6 * n) {
            return {};
        }
        int base = n_sum / n;
        int rem = n_sum % n;
        vector<int> ans(n, base);
        for (int i = 0; i < rem; i++) {
            ans[i]++;
        }

        return ans;
    }
};
