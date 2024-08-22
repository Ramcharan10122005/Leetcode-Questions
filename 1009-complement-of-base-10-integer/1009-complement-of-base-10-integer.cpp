class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        return 1;
        int ans=0,place=1;
        while(n){
            int bit=n%2;
            ans+=((bit^1)*place);
            place*=2;
            n/=2;
        }
        return ans;
    }
};