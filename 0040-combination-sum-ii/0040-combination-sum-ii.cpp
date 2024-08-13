class Solution {
public:
    vector<int>temp;
    void backtrack(int target,int idx,vector<int>& candidates,vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(temp);
            return ;
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx&&candidates[i]==candidates[i-1])
            continue;
            if(candidates[i]>target)
            break;
            temp.push_back(candidates[i]);
            backtrack(target-candidates[i],i+1,candidates,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        backtrack(target,0,candidates,ans);
        return ans;
    }
};