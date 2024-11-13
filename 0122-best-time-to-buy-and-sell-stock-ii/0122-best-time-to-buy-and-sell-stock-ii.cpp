class Solution {
public:
    int maxProfit(vector<int>& prices) {
        multiset<pair<int, int>> set1;
        int n = prices.size();
        int res = 0;
        for (int i = 1; i < n; i++) {
            pair p1 = make_pair(prices[i - 1], prices[i]);
            set1.insert(p1);
        }
        for (auto set : set1) {
            if (set.first < set.second) {
                res = res + set.second - set.first;
            }
        }
        return res;
    }
};