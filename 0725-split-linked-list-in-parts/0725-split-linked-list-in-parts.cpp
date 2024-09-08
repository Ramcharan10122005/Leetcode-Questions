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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k,nullptr);
        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        int base=n/k,extra=n%k;
        ListNode* curr=head;
        ListNode* prev=nullptr;
        for(int i=0;i<k;i++){
            int s=base;
            if(extra){
                s=s+1;
                extra--;
            }
            ans[i]=curr;
            for(int j=0;j<s;j++){
                prev=curr;
                if(curr)
                curr=curr->next;
            }
            if(prev!=nullptr)
            prev->next=nullptr;
        }
        return ans;
    }
};