class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>> grid(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=(i*n)+j;
            }
        }
        int k=0,l=0;
        for(auto s:commands){
            if(s=="RIGHT"){
                l++;
            }
            else if(s=="LEFT"){
                l--;
            }
            else if(s=="UP"){
                k--;
            }
            else if(s=="DOWN"){
                k++;
            }
            k = max(0, min(n-1, k));
            l = max(0, min(n-1, l));
        }
        return grid[k][l];
    }
};