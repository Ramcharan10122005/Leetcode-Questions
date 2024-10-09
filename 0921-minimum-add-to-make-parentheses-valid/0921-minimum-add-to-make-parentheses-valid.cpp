class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int ans=0;
        if(s.size()==0)
        return 0;
        for(auto ch:s){
            if(ch=='(')
            st.push(ch);
            else{
                if(!st.empty())
                st.pop();
                else
                ans++;
            }
        }
        return ans+st.size();
    }
};