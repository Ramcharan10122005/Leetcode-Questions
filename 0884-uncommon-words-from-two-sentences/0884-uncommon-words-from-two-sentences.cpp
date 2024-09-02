class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string, int> mp;
        char* token = strtok(&s1[0], " ");
        while (token != nullptr) {
            mp[string(token)]++;
            token = strtok(nullptr, " ");
        }
        token = strtok(&s2[0], " ");
        while (token != nullptr) {
            if (mp.find(string(token)) != mp.end()) {
                mp[string(token)] = -1;
            } else {
                mp[string(token)]++;
            }
            token = strtok(nullptr, " ");
        }

        for (auto p : mp) {
            if (p.second == 1) { 
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};
