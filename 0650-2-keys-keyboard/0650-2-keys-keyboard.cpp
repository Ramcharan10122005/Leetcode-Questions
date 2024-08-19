class Solution {
public:
    int minSteps(int n) {
        int curr=1,curr_copy=0,ans=0;
        while(curr<n){
            if(n%curr==0){
                curr_copy=curr;
                ans++;
            }
            ans++;
            curr+=curr_copy;
        }
        return ans;
    }
};