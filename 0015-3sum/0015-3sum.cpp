class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            if (i > 0 && a == nums[i - 1])
                continue;
            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                int three = a + nums[l] + nums[r];
                if (three > 0)
                    r -= 1;
                else if (three < 0)
                    l += 1;
                else {
                    ans.push_back({a, nums[l], nums[r]});
                    l += 1;
                    while (nums[l] == nums[l - 1] && l < r)
                        l += 1;
                }
            }
        }
        return ans;
    }
};