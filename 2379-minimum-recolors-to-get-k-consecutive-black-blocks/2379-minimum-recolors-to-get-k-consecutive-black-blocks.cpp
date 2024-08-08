class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int m=INT_MAX;
        int l=0,r=0,curr=0;
        for(int r=0;r<blocks.size();r++){
            if(blocks[r]=='W')
            curr++;
            if(r-l+1>=k){
                m=min(m,curr);
                if(blocks[l]=='W')
                curr--;
                l++;
            }
        }
        return m;
    }
};