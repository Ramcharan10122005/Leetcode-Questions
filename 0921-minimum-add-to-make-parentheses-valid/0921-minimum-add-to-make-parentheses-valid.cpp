class Solution {
public:
    int minAddToMakeValid(string s) {
        int l=0,ans=0;
        for(auto ch:s){
            if(ch=='(')
            l++;
            else{
                if(l==0)
                ans++;
                else
                l--;
            }
        }
        return ans+l;
    }
};