class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int ans=0;
        while(1){
            int count=0;
            for(int i=0; i<s.size()-1; i++){
                if(s[i] == '0' && s[i+1] == '1'){
                    swap(s[i],s[i+1]);
                    i++;
                    count++;
                }
            }
            if(count == 0)  return ans;
            else ans++;
        }
        return 0;
    }
};