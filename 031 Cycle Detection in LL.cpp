// Bruteforce
TC  : O(N * 2 log(N))    2 * log(n) => one log(n) is for find operation in map and another for inserting. For n nodes we do n * 2 log(n)
SC  : O(N)

bool solution(Node* head){
    map<Node*,int> m;
    Node* temp = head;
    while(temp != nullptr){
        if(m.find(temp) == m.end()){
        m.insert({temp,0});
        temp = temp->next;
        }
        else return 1;
    }
    return 0;
}

//Optimal
TC  : O(N)
SC  : O(1)

bool solution(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return 1;
    }
    return 0;
}
