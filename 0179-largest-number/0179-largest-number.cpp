class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            str.push_back(to_string(nums[i]));
        }
        auto compare = [&](string a, string b) { return a + b > b + a; };
        sort(str.begin(), str.end(), compare);
        if (str[0] == "0")
            return "0";
        string ans = "";
        for (auto s : str) {
            ans += s;
        }
        return ans;
    }
};