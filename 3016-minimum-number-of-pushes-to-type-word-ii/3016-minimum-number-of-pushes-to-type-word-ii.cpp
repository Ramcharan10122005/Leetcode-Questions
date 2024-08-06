class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(auto ch:word){
            freq[ch-'a']++;
        }
        sort(freq.begin(), freq.end(),greater<int>());
        int dig_used=0,ans=0;
        for(auto f:freq){
            ans+=((dig_used/8) + 1)*f;
            dig_used++;
        }
        return ans;
    }
};