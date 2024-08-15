class Solution {
public:
    vector<int> temp;
    void backtrack(vector<vector<int>>& ans, int n, int target, int start) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = start; i <= n; i++) {
            temp.push_back(i);
            backtrack(ans, n, target - 1, i + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        backtrack(ans, n, k, 1);
        return ans;
    }
};
