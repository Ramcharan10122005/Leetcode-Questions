class Solution {
public:
    int recur(int n1,int n2){
        if(n1>=n2)
        return n1-n2;
        if(n2%2==0)
        return 1+recur(n1,n2/2);
        else
        return 1+recur(n1,n2+1);
    }
    int brokenCalc(int startValue, int target) {
        return recur(startValue,target);
    }
};