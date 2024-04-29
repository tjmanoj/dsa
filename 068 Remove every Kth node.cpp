// TC  :O(n)
// SC  :O(1)

class Solution {
    public:
    Node* deleteK(Node *head,int K){
      if(K == 1) return nullptr;
      Node* temp = head;
      int count = 1;
      while(temp != nullptr && temp->next != nullptr){
          if(count == K-1){
              temp->next = temp->next->next;
              temp = temp->next;
              count = 1;
          }
          else{
              count++;
              temp = temp->next;
          }
      }
      return head;
    }
};
