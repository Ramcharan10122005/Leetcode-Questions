class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min1=INT_MAX,min2=INT_MAX;
        for(int i:nums1)
        min1=min(i,min1);
        for(int i:nums2)
        min2=min(i,min2);
        return min2-min1;
    }
};