/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void traversal(struct TreeNode* root, int* max) {
    if (root == NULL)
        return;
    traversal(root->right, max);
    root->val = root->val + (*max);
    *max = fmax(*max, root->val);
    traversal(root->left, max);
}
struct TreeNode* bstToGst(struct TreeNode* root) {
    int max = 0;
    traversal(root, &max);
    return root;
}