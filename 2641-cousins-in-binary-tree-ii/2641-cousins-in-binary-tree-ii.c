int size(struct TreeNode* x) {
    if (x == NULL) {
        return 0;
    }
    return size(x->left) + size(x->right) + 1;
}
void dfslevels(struct TreeNode* root, int depth, int* level) {
    if (root == NULL) {
        return;
    }
    level[depth] += root->val;
    dfslevels(root->left, depth + 1, level);
    dfslevels(root->right, depth + 1, level);
}
void dfsupdate(struct TreeNode* root, int sum, int depth, int* level) {
    if (root == NULL) {
        return;
    }
    if (depth == 0 || depth == 1) {
        root->val = 0;
    } else {
        root->val = level[depth] - sum;
    }
    int children = 0;
    if (root->left) {
        children += root->left->val;
    }
    if (root->right) {
        children += root->right->val;
    }
    dfsupdate(root->left, children, depth + 1, level);
    dfsupdate(root->right, children, depth + 1, level);
}
struct TreeNode* replaceValueInTree(struct TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }
    int treeSize = size(root);
    int* level = (int*)calloc(treeSize, sizeof(int));  
    dfslevels(root, 0, level);
    dfsupdate(root, 0, 0, level);
    return root;
}
