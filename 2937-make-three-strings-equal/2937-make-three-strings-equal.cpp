class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int len=0;
        int minlen=min({s1.size(),s2.size(),s3.size()});
        for(int i=0;i<minlen;i++){
            if(s1[i]!=s2[i]||s2[i]!=s3[i]||s3[i]!=s1[i])
            break;
            else
            len++;
        }
        int ans=0;
        ans+=(s1.size()-len)+(s2.size()-len)+(s3.size()-len);
        return len>0?ans:-1;
    }
};