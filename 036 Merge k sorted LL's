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


// Brute Force
TC  : O(n*k * log m + m)    // m is n*k and the log m is for inserting
SC  : O(n) + o(n)

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        multiset<int> ans;
        ListNode* a = new ListNode(-1);
        ListNode* temp = a;
        for(auto i: lists){
            while(i != nullptr){
                ans.insert(i->val);
                i = i->next;
            }
        }
        for(auto i: ans){
            temp->next = new ListNode(i);
            temp = temp->next;
        }
        return a->next;
    }
};




// Better for space not time
TC    : N * (k * (k+1))/2)
SC    : O(1)

the first two list will take                         =>N1 + N2
then the first two(N1+N2) and third will take        =>N1 + N2 + N3

Assuming all the N1,N2 as N

take N common    N( 1+2+3+..)


class Solution {
public:
    ListNode* mergeTwoList(ListNode* &head1, ListNode* &head2){
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        while(head1 && head2){
            if(head1->val <= head2->val){
                temp->next = head1;
                temp = head1;
                head1 = head1->next;
            }
            else{
                temp->next = head2;
                temp = head2;
                head2 = head2->next;
            }
        }
        if(head1) temp->next = head1;
        else temp->next = head2;
        return ans->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return nullptr;
        if(lists.size() == 1) return lists[0];
        ListNode* head = lists[0];
        for(int i=1;i<lists.size();i++){
            head = mergeTwoList(head, lists[i]);
        }
        return head;
    }
};


//Optimal
TC:
    Usually in queue the push operation takes log k , where k is the size of the queue
1. for the first for loop it takes k * log k, wher k is the number of LL's
2. The while loop will run k*N times, consider all the LL are of N size.
3. Inside the while loop there are push, pop and push <= total 3 operations. So 3logK times

         for           while
TC    : k * logk  +  N*K * logk
SC    : O(k)

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> p;
        for(int i=0;i<lists.size();i++){
            if(lists[i]) p.push({lists[i]->val, lists[i]});
        }
        

        while(! p.empty()){
            auto it = p.top();
            temp->next = it.second;
            p.pop();

            // add the next node to prioriy queue
            if(it.second->next) p.push({it.second->next->val, it.second->next});
            temp = temp->next;
        }
        return ans->next;
    }   
};
