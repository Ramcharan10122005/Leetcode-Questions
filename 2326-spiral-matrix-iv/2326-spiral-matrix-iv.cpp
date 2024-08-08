/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n));
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                if (head) {
                    ans[top][i] = head->val;
                    head = head->next;
                } else {
                    ans[top][i] = -1;
                }
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                if (head) {
                    ans[i][right] = head->val;
                    head = head->next;
                } else {
                    ans[i][right] = -1;
                }
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    if (head) {
                        ans[bottom][i] = head->val;
                        head = head->next;
                    } else {
                        ans[bottom][i] = -1;
                    }
                }
            }
            bottom--;
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    if (head) {
                        ans[i][left] = head->val;
                        head = head->next;
                    } else {
                        ans[i][left] = -1;
                    }
                }
            }
            left++;
        }
        return ans;
    }
};