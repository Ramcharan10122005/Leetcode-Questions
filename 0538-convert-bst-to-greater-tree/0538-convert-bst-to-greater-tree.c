void traversal(struct TreeNode* root, int* sum) {
    if (root == NULL)
        return;
    traversal(root->right, sum);
    root->val += *sum;
    *sum = root->val;
    traversal(root->left, sum);
}

struct TreeNode* convertBST(struct TreeNode* root) {
    int sum = 0;
    traversal(root, &sum);
    return root;
}