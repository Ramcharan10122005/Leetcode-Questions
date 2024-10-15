class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0;
        int b=0;
        for(auto ch:s){
            if(ch=='0')
            ans+=b;
            else
            b++;
        }
        return ans;
    }
};