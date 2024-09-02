class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        vector<int> ans;
        priority_queue<int> hp;
        
        for (auto q : queries) {
            int x = q[0];
            int y = q[1];
            int distance = abs(x) + abs(y);
            
            hp.push(distance);
            
            if (hp.size() > k) {
                hp.pop();
            }
            
            if (hp.size() < k) {
                ans.push_back(-1); 
            } else {
                ans.push_back(hp.top()); 
            }
        }
        
        return ans;
    }
};
