void dfs(struct TreeNode* root,int max,int* ans){
    if(root->val>=max){
        (*ans)++;
        max=root->val;
    }
    if(root->left)
    dfs(root->left,max,ans);
    if(root->right)
    dfs(root->right,max,ans);
    return;
}
int goodNodes(struct TreeNode* root){
    if(root==NULL)
    return 0;
   int ans=0;
   int max=root->val;
   dfs(root,max,&ans);
   return ans;
}