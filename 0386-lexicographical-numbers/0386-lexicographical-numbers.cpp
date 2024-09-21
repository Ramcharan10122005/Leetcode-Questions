class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        int curr=1;
        for(int i=1;i<=n;i++){
            ans.push_back(curr);
            if(curr*10<=n){
                curr*=10;
            }
            else{
                while(curr>=n||curr%10==9)
                curr/=10;
                curr++;
            }
        }
        return ans;
    }
};