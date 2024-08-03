class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int len = 0;
        for (int i = 0; s[i]; i++) {
            // odd len palindromes
            int l = i, r = i;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                if (r - l + 1 > len) {
                    ans = s.substr(l, r - l + 1);
                    len = r - l + 1;
                }
                l--;
                r++;
            }
            // even len palindromes
            l = i, r = i + 1;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                if (r - l + 1 > len) {
                    ans = s.substr(l, r - l + 1);
                    len = r - l + 1;
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};