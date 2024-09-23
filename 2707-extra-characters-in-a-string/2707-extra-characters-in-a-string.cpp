class Solution {
public:
    int dfs(int i, unordered_map<string, bool>& mp, vector<int>& dp, string& s) {
        if (i == s.size())  
            return 0;
        if (dp[i] != -1)
            return dp[i];
        
        int res = 1 + dfs(i + 1, mp, dp, s);  
        for (int j = i + 1; j <= s.size(); j++) {
            if (mp[s.substr(i, j - i)]) {
                res = min(res, dfs(j, mp, dp, s)); 
            }
        }
        dp[i] = res;
        return res;
    }

    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_map<string, bool> mp;
        for (auto word : dictionary) {
            mp[word] = true;
        }

        vector<int> dp(s.size() + 1, -1);  
        dp[s.size()] = 0;  
        return dfs(0, mp, dp, s);
    }
};
