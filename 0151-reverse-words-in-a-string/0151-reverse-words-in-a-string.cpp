class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = 0, n = s.size();
        
        while (i < n) {
            while (i < n && s[i] == ' ') i++;
            if (i >= n) break;
            
            string temp = "";
            
            while (i < n && s[i] != ' ') {
                temp += s[i];
                i++;
            }
            
            if (ans.empty()) {
                ans = temp;
            } else {
                ans = temp + " " + ans;
            }
        }
        
        return ans;
    }
};
