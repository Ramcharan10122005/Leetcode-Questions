class Solution {
public:
    void dfs(int n,int idx,vector<bool>& visit,vector<vector<int>>& stones){
        visit[idx]=true;
        for(int i=0;i<n;i++){
            if(visit[i]==false){
                if(stones[idx][0]==stones[i][0])
                dfs(n,i,visit,stones);
                if(stones[idx][1]==stones[i][1])
                dfs(n,i,visit,stones);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int conn=0;
        int n=stones.size();
        vector<bool>visit(n,false);
        for(int i=0;i<n;i++){
            if(visit[i]==false){
                dfs(n,i,visit,stones);
                conn++;
            }
        }
        return n-conn;
    }
};