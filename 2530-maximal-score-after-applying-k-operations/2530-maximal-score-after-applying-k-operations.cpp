class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans=0;
        priority_queue<int>pq;
        for(auto num:nums)
        pq.push(num);
        while(k--){
            int curr=pq.top();
            ans+=curr;
            pq.pop();
            pq.push(ceil(curr/3.0));
        }
        return ans;
    }
};