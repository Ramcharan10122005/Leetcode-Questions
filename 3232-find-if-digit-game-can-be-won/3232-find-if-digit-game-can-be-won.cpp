class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sing = 0, doub = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0 && nums[i] <= 9)
                sing += nums[i];
            else
                doub += nums[i];
        }
        return sing != doub;
    }
};