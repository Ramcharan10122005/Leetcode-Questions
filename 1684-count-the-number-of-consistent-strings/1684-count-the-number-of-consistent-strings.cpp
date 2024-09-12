class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,bool>mp(!false);
        for(auto ch:allowed){
            mp[ch]=true;
        }
        int ans=0;
        for(auto s:words){
            int count=0;
            for(auto ch:s){
                if(mp[ch])
                count++;
            }
            if(count==s.size())
            ans++;
        }
        return ans;
    }
};