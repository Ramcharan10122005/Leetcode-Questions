class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char cur=s[i];
            if(st.empty()){
                st.push(cur);
                continue;
            }
            if(s[i]=='B'&&st.top()=='A'){
                st.pop();
            }
            else if(s[i]=='D'&&st.top()=='C'){
                st.pop();
            }
            else{
                st.push(cur);
            }
        }
        return st.size();
    }
};