class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l=0,ans=1,used=0;
        for(int r=0;r<nums.size();r++){
            while((used & nums[r])!=0){
                used^=nums[l];
                l++;
            }
            used|=nums[r];
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};