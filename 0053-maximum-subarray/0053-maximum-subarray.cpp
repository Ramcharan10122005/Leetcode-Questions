class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub = nums[0];
        int cursum = 0;
        for (auto n : nums) {
            if (cursum < 0)
                cursum = 0;
            cursum += n;
            maxsub = max(maxsub, cursum);
        }
        return maxsub;
    }
};