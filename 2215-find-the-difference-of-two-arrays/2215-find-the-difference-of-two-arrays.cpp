class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        for (int i = 0; i < n1; i++) {
            mp1[nums1[i]] = 1;
        }
        for (int i = 0; i < n2; i++) {
            mp2[nums2[i]] = 1;
        }
        vector<vector<int>> ans(2);
        for (int i = 0; i < n1; i++) {
            if (mp1[nums1[i]] == 1 && mp2.count(nums1[i]) == 0) {
                ans[0].push_back(nums1[i]);
                mp1[nums1[i]] = 0;
            }
        }

        for (int i = 0; i < n2; i++) {
            if (mp1.count(nums2[i]) == 0 && mp2[nums2[i]] == 1) {
                ans[1].push_back(nums2[i]);
                mp2[nums2[i]] = 0;
            }
        }

        return ans;
    }
};