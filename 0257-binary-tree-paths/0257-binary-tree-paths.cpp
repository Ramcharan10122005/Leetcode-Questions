/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,string currPath,vector<string>&ans){
        currPath+="->"+to_string(root->val);
        if(root->left==nullptr&&root->right==nullptr){
            ans.push_back(currPath);
            return;
        }
        if(root->left)
        dfs(root->left,currPath,ans);
        if(root->right)
        dfs(root->right,currPath,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(root==nullptr)
        return ans;
        string currPath=to_string(root->val);
        if(root->left==nullptr&&root->right==nullptr)
        ans.push_back(currPath);
        if(root->left)
        dfs(root->left,currPath,ans);
        if(root->right)
        dfs(root->right,currPath,ans);
        return ans;
    }
};