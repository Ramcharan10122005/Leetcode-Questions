class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> mp;
        for(int i=0;i<paths.size();i++){
            mp[paths[i][0]]++;
            mp[paths[i][1]]++;
        }
        for(int j=0;j<paths.size();j++){
            if(mp[paths[j][1]]==1)return paths[j][1];
        }
        return " ";
    }
};