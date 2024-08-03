class Solution {
public:
    bool isprime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    int nonSpecialCount(int l, int r) {
        int count=0;
        for(int i=2;i*i<=r;i++){
            if(isprime(i)){
                int num=i*i;
                if(num>=l&&num<=r)
                count++;
            }
        }
        return r-l+1-count;
    }
};