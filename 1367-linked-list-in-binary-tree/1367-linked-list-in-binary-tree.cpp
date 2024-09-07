class Solution {
public:
    bool dfs(ListNode* head, TreeNode* root) {
        if (root == nullptr)
            return false;
        if (head->val != root->val)
            return false;
        if (head->next == nullptr)
            return true;
        bool left = false, right = false;
        if (root->left && head->next) {
            left = dfs(head->next, root->left);
        }
        if (root->right && head->next) {
            right = dfs(head->next, root->right);
        }
        return left || right;
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if (root == nullptr)
            return false;
        if (root->val == head->val) {
            if (dfs(head, root))
                return true;
        }
        return isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
