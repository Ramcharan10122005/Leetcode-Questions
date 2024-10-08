

int maxDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    else {
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        if (left > right)
            return left + 1;
        else
            return right + 1;
    }
}