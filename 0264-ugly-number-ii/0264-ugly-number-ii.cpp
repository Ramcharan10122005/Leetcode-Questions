class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>arr(n,0);
        arr[0]=1;
        int i2=0,i3=0,i5=0;
        for(int i=1;i<n;i++){
            int next_num=min(arr[i2]*2,min(arr[i3]*3,arr[i5]*5));
            arr[i]=next_num;
            if(next_num==arr[i2]*2)
            i2++;
            if(next_num==arr[i3]*3)
            i3++;
            if(next_num==arr[i5]*5)
            i5++;
        }
        return arr[n-1];
    }
};