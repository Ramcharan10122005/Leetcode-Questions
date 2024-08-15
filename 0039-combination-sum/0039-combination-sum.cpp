class Solution {
public:
    vector<int> temp;
    void backtrack(int target, int idx, vector<int>& candidates, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            if (target >= candidates[i]) { 
                temp.push_back(candidates[i]);
                backtrack(target - candidates[i], i, candidates, ans); 
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        backtrack(target, 0, candidates, ans);
        return ans;
    }
};
