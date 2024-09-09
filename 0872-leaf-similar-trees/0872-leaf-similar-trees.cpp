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
    void traversal(TreeNode* root,vector<int>&arr){
        if(root==nullptr)
        return ;
        if(root->left==nullptr&&root->right==nullptr)
        arr.push_back(root->val);
        traversal(root->left,arr);
        traversal(root->right,arr);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>arr1,arr2;
        traversal(root1,arr1);
        traversal(root2,arr2);
        if(arr1.size()!=arr2.size())
        return false;
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]!=arr2[i])
            return false;
        }
        return true;
    }
};