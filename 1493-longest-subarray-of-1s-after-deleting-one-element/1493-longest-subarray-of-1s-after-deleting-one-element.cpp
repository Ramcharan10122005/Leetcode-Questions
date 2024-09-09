class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0, ans = 0, count = 0, n = nums.size();
        while (j < n) {
            if (nums[j] == 0)
                count++;
            while (count > 1) {
                if (nums[i] == 0)
                    count--;
                i++;
            }
            ans = max(ans, j - i);
            j++;
        }
        return ans;
    }
};