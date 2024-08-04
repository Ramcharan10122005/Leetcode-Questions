class neighborSum {
public:
    vector<vector<int>>arr;
    int n;
    map<int,pair<int,int>>mp;
    neighborSum(vector<vector<int>>& grid) {
        n=grid.size();
        arr=grid;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]={i,j};
            }
        }
    }
    
    int adjacentSum(int value) {
        int i=mp[value].first,j=mp[value].second,sum=0;
        if(i-1>=0)
        sum+=arr[i-1][j];
        if(j-1>=0)
        sum+=arr[i][j-1];
        if(i+1<n)
        sum+=arr[i+1][j];
        if(j+1<n)
        sum+=arr[i][j+1];
        return sum;
    }
    
    int diagonalSum(int value) {
        int i=mp[value].first,j=mp[value].second,sum=0;
        if(i-1>=0&&j-1>=0)
        sum+=arr[i-1][j-1];
        if(i-1>=0&&j+1<n)
        sum+=arr[i-1][j+1];
        if(i+1<n&&j-1>=0)
        sum+=arr[i+1][j-1];
        if(j+1<n&&i+1<n)
        sum+=arr[i+1][j+1];
        return sum;
    }
};

/**
 * Your neighborSum object will be instantiated and called as such:
 * neighborSum* obj = new neighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */