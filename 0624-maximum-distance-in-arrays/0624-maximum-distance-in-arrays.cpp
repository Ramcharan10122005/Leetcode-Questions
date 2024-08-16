class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        vector<int> mins;
        vector<int> maxs;
        for (int i = 0; i < arrays.size(); i++) {
            int s = arrays[i].size();
            mins.push_back(arrays[i][0]);
            maxs.push_back(arrays[i][s - 1]);
        }
        int ans = INT_MIN;
        for (int i = 0; i < mins.size(); i++) {
            for (int j = 0; j < maxs.size(); j++) {
                if (i == j)
                    continue;
                else
                    ans = max(ans, abs(mins[i] - maxs[j]));
            }
        }
        return ans;
    }
};