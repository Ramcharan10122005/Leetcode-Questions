#include <unordered_map>
#include <vector>
#include <string>
#include <functional>

class Solution {
public:
    unordered_map<char, string> mp{
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
    };

    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        std::function<void(int, string)> backtrack = [&](int i, string curr) {
            if (curr.size() == digits.size()) {
                ans.push_back(curr);
                return;
            }
            for (char c : mp[digits[i]]) {
                backtrack(i + 1, curr + c);
            }
        };

        if (!digits.empty()) {
            backtrack(0, "");
        }

        return ans;
    }
};
