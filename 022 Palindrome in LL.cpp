// Bruteforce 
TC  : O(2N)
SC  : O(N)

bool solution(Node* head) {
    vector<int> v;
    Node* temp = head;
    while(temp != nullptr){
        v.push_back(temp->data);
        temp = temp->next;
    }
    int i= 0;
    int j= v.size() - 1;
    while(i <= j){
        if(v[i++] != v[j--]) return 0;
    }
    return 1;
}


//Optimal
TC  : O(2N)    for mid find => N/2, for reverse right end part => N/2 , for comparison => N/2
SC  : O(1) 

bool solution(Node* head) {
    if(head->next == nullptr) return 1;

    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* cur;
    Node* prev = nullptr;
    while(slow != nullptr){
        cur = slow;
        slow = slow->next;
        cur->next = prev;
        prev = cur;
    }
    Node* temp = head;
    while(prev != nullptr){
        if(temp->data != prev->data) return 0;
        temp = temp->next;
        prev = prev->next;
    }
    return 1;
}
