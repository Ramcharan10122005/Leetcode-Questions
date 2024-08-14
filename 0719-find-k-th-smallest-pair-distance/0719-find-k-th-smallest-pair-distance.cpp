class Solution {
public:
    int count(int dist,vector<int>& nums){
        int l=0,res=0;
        for(int r=0;r<nums.size();r++){
            while(nums[r]-nums[l]>dist)
            l++;
            res+=r-l;
        }
        return res;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int r=nums[nums.size()-1],l=0;
        while(l<r){
            int mid=l+((r-l)/2);
            int pairs=count(mid,nums);
            if(pairs>=k)
            r=mid;
            else 
            l=mid+1;
        }
        return r;
    }
};