class Solution {
public:
    int magic(int r,int c,vector<vector<int>>& grid){
        //ensuring 1-9 is present
        vector<bool>visited(10,false);
        for(int i=r;i<r+3;i++){
            for(int j=c;j<c+3;j++){
                int num=grid[i][j];
                if(num<1||num>9)
                return 0;
                if(visited[num])
                return 0;
                visited[num]=true;
            }
        }
        //rows
        for(int i=r;i<r+3;i++){
            if(grid[i][c]+grid[i][c+1]+grid[i][c+2]!=15)
            return 0;
        }
        //cols
        for(int i=c;i<c+3;i++){
            if(grid[r][i]+grid[r+1][i]+grid[r+2][i]!=15)
            return 0;
        }
        //diagonals
        if(grid[r][c]+grid[r+1][c+1]+grid[r+2][c+2]!=15||grid[r][c+2]+grid[r+1][c+1]+grid[r+2][c]!=15)
        return 0;
        // if all the conditions are satisfied
        return 1;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int ans=0;
        int r=grid.size(),c=grid[0].size();
        for(int i=0;i<r-2;i++){
            for(int j=0;j<c-2;j++){
                ans+=magic(i,j,grid);
            }
        }
        return ans;
    }
};