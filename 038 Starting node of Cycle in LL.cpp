TC  : O(N * 2 log(N))    2 * log(n) => one log(n) is for find operation in map and another for inserting. For n nodes we do n * 2 log(n)
SC  : O(N)


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int> m;
        ListNode* temp = head;
        while(temp != nullptr){
            if(m.find(temp) == m.end()) m.insert({temp,0});
            else return temp;
            temp = temp->next;
        }
        return nullptr;
    }
};
