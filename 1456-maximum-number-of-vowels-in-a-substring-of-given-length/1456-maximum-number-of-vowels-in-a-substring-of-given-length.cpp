class Solution {
public:
    bool isvowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int maxVowels(string s, int k) {
        int i=0,j=0,count=0,ans=INT_MIN,n=s.size();
        while(j<n){
            while(j-i>=k){
                if(isvowel(s[i]))
                count--;
                i++;
            }
            if(isvowel(s[j]))
            count++;
            ans=max(ans,count);
            j++;
        }
        return ans;
    }
};