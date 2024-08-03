class Solution {
public:
    int sum(vector<int>& nums, int val) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans += ceil(double(nums[i]) / double(val));
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int h = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            h = max(h, nums[i]);
        }
        while (l <= h) {
            int mid = (l + h) / 2;
            if (sum(nums, mid) <= threshold)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
};