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
    void traverse(TreeNode* root,vector<int>& arr){
        if(root!=nullptr){
            traverse(root->left,arr);
            arr.push_back(root->val);
            traverse(root->right,arr);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>arr;
        traverse(root,arr);
        sort(arr.begin(),arr.end());
        int num=arr[0];
        int i=0;
        while(i<arr.size()&&arr[i]==num)
        i++;
        return i==arr.size()?-1:arr[i];
    }
};