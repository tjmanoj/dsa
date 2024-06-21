// Optimal
TC  : O(n/2)
SC  : O(1)

Node* solution(Node* head){
    if(head->next == nullptr) return nullptr;
    Node* prev;
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = prev->next->next;
    delete slow;
    return head;
}
