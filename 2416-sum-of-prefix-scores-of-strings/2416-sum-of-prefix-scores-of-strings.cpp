class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        unordered_map<string_view, int> prefixCount;

       for (const string& word : words) {
             for (int len = 1; len <= word.size(); ++len) {
                ++prefixCount[string_view(word.c_str(), len)]; 
        }
       }

        vector<int> ans(words.size(), 0);

        
          for (int i = 0; i < words.size(); ++i) {
             for (int len = 1; len <= words[i].size(); ++len) {
                ans[i] += prefixCount[string_view(words[i].c_str(), len)];
            }
        }


        return ans;
    }
};