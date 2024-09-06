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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if (!head) return nullptr;
        int maxi = INT_MIN;
        for (auto num : nums) {
            maxi = max(num, maxi);
        }
        vector<bool> hash(100001, false);
        for (auto num : nums) {
            hash[num] = true;
        }
        ListNode* anshead = head;
        while (anshead != nullptr && hash[anshead->val]) {
            anshead = anshead->next; 
        }
        if (anshead==nullptr) return nullptr;
        ListNode* prev = anshead;
        ListNode* curr = anshead->next;
        while (curr != nullptr) {
            if (hash[curr->val]) {
                prev->next = curr->next;
            } else {
                prev = curr;
            }
            curr = curr->next;
        }
        return anshead;
    }
};
