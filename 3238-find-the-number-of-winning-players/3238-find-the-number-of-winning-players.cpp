class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int, int>> mp(n);
        for(auto p:pick){
            int per=p[0];
            int color=p[1];
            mp[per][color]++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(auto entry:mp[i]){
                if(entry.second>i){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};