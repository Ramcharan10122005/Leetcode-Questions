class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int n = arr.size();
        vector<int> pref_xor(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref_xor[i + 1] = pref_xor[i] ^ arr[i];
        }
        for (auto q : queries) {
            int l = q[0], r = q[1];
            int res = pref_xor[r + 1] ^ pref_xor[l];
            ans.push_back(res);
        }
        return ans;
    }
};