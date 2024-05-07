// TC  : O(N)
// SC  : O(1)

class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        if(head->val > 4) head = new ListNode(0,head); // add new node in head

        ListNode* temp = head;

        while(temp){
            temp->val = (temp->val * 2) % 10;

            if(temp->next && temp->next->val > 4) temp->val++;

            temp = temp->next;
        }
        return head;
    }
};
