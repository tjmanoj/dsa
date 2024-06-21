// Bruteforce
TC  : O(N)
SC  : O(n + m)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        multiset<int> s;
        ListNode* temp = list1;
        ListNode* ans = new ListNode(0);
        while(temp != nullptr){
            s.insert(temp->val);
            temp = temp->next;
        }
        temp = list2;
        while(temp != nullptr){
            s.insert(temp->val);
            temp = temp->next;
        }

        temp = ans;
        for(auto i : s){
            ListNode* t = new ListNode(i);
            temp->next = t;
            temp = temp->next;
        }
        return ans->next;

    }
};



//Optimal
TC  : O(n)
SC  : O(1)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     ListNode* ans = new ListNode(-1);
     ListNode* temp = ans;
     while(list1 && list2){
        if(list1->val <= list2->val){
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
        
     }  
    if(list1) temp->next = list1;
    else temp->next = list2; 
    return ans->next;
    }
};
