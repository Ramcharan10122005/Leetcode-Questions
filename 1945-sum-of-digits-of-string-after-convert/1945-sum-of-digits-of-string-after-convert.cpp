class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        for (auto ch : s) {
            int n = ch - 'a' + 1; 
            num += to_string(n);
        }
        
        int ans = 0;
        for (auto n : num) {
            ans += n - '0';
        }

        while (k-1 > 0) {
            int nextans = 0;
            while (ans > 0) {
                nextans += ans % 10;
                ans /= 10;
            }
            ans = nextans;
            k--;
        }
        
        return ans;
    }
};
