class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0, o = 0, t = 0;
        for (auto n : nums) {
            if (n == 0)
                z++;
            else if (n == 1)
                o++;
            else
                t++;
        }
        int ind = 0;
        for (int i = 0; i < z; i++) {
            nums[ind++] = 0;
        }
        for (int i = 0; i < o; i++) {
            nums[ind++] = 1;
        }
        for (int i = 0; i < t; i++) {
            nums[ind++] = 2;
        }
    }
};