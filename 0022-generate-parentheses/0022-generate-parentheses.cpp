class Solution {
public:
    void generate(vector<string>& ans, string p, int n, int m) {
        if (n == 0 && m == 0) {
            ans.push_back(p);
            return;
        }
        if (n > 0) {
            generate(ans, p + "(", n - 1, m + 1);
        }
        if (m > 0) {
            generate(ans, p + ")", n, m - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans, "", n, 0);
        return ans;
    }
};