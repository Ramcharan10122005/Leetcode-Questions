class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n = s.size();
        // 11111 = aeiou
        int cnt = 31;
        int ans = 0;
        unordered_map<int, int>mp;
        for(int idx = 0; idx < n; idx++){
            char i = s[idx];
            if(i == 'a')cnt ^= (1<<4);
            if(i == 'e')cnt ^= (1<<3);
            if(i == 'i')cnt ^= (1<<2);
            if(i == 'o')cnt ^= (1<<1);
            if(i == 'u')cnt ^= (1);
            if(mp[cnt])ans=max(ans, idx + 1 - mp[cnt]);
            else mp[cnt] = idx+1;
            ans = cnt == 31? idx+1: ans;
        }
        return ans;
    }
};