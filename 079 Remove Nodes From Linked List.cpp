// TC  : O(N)
// SC  : O(1)

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
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode*temp = head;
        ListNode* cur;
        while(temp){
            cur = temp;
            temp = temp->next;
            cur->next = prev;
            prev = cur;
        }
        return cur;
    }
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = reverse(head);
        ListNode* ans = new ListNode(-1);
        ListNode* anstemp = ans;
        while(temp){
            if(temp->val >= anstemp->val){
                anstemp->next = temp;
                anstemp = anstemp->next;
            }
            temp = temp->next;
        }
        anstemp->next = nullptr;
        return reverse(ans->next);
    }
};
