class Solution {
public:
    int maxOperations(const std::string& s) {
        int ans = 0;
        int count = 0; 
        int n = s.size();
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                count++;
            } else if (s[i] == '0') {
                while (i < n && s[i] == '0') {
                    i++;
                }
                ans += count;
                i--;
            }
        }
        
        return ans;
    }
};