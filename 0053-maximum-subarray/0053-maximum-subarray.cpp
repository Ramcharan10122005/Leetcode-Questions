class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub = nums[0];
        int cursum = nums[0];
        for (int i=1;i<nums.size();i++) {
            cursum = max(nums[i],cursum+nums[i]);
            maxsub = max(maxsub, cursum);
        }
        return maxsub;
    }
};