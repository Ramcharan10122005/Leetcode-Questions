class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n,
                                             vector<vector<int>>& queries) {
        set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(i);
        }
        vector<int> ans;
        for (auto q : queries) {
            int i = q[0], j = q[1];
            auto start = s.lower_bound(i + 1), end = s.upper_bound(j - 1);
            s.erase(start, end);
            ans.push_back(s.size() - 1);
        }
        return ans;
    }
};