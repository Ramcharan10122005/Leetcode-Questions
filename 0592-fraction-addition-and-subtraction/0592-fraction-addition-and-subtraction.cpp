class Solution {
public:
    string fractionAddition(string s) {
        int n=0,d=1,i=0,len=s.size();
        while(i<len){
            int cn=0;
            int cd=0;
            bool neg=false;
            if(s[i]=='-'){
                neg=true;
            }
            if(s[i]=='+' || s[i]=='-'){
                i++;
            }
            while(i<len && isdigit(s[i])){
                int val=s[i]-'0';
                cn=cn*10+val;
                i++;
            }
            i++;
            while(i<len && isdigit(s[i])){
                int val=s[i]-'0';
                cd=cd*10+val;
                i++;
            }
            if(neg){
                cn*=-1;
            }
            n=n*cd+cn*d;
            d=d*cd;
        }
        int hcf=abs(__gcd(n,d));
        n=n/hcf;
        d=d/hcf;
        string ans=to_string(n)+"/"+to_string(d);
        return ans;
    }
};