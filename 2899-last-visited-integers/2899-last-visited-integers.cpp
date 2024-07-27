class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        vector<int> ans;
        vector<int> seen;
        int count = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0) {
                seen.push_back(nums[i]);
                count = 0;
            } else {
                count++; 
                if (count <= seen.size()) {
                    ans.push_back(seen[seen.size() - count]);
                } else {
                    ans.push_back(-1);
                }
            }
        }
        
        return ans;
    }
};
