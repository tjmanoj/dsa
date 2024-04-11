class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* prev = nullptr;
        ListNode* temp = head;
        ListNode* curr = nullptr;

        while(temp != nullptr){
            curr = temp;
            temp = temp->next;
            curr->next = prev;
            prev = curr;
        }
        return prev;
    }

    ListNode* middle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    int pairSum(ListNode* head) {
        if(head->next->next == nullptr) return head->val + head->next->val;
        int m = -1;
        ListNode* mid = middle(head);
        ListNode* rev = reverseList(mid);

        ListNode* temp = head;
        ListNode* temp1 = rev;

        while(temp != nullptr && temp1 != nullptr){
            if(m < temp->val + temp1->val) m =  temp->val + temp1->val;
            temp = temp->next;
            temp1 = temp1->next;
        }
        return m;
    }
};
