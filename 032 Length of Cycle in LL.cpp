// BruteForce
TC  : O(n * 2 log n)  // for find and insert log n
SC  : O(N)

int solution(Node* head){
    Node* temp = head;
    map<Node*,int> m;
    int count = 0;
    Node* target = nullptr;
    while(temp != nullptr){
        if(m.find(temp) == m.end()){
            m.insert({temp, count});
            count++;
        }
        else return count - m[temp];
        temp = temp->next;
        }
        return 0;
        
    
}

// Optimal
TC  : O(2N)  // n for cycle detect n for cycle worst case
SC  : O(1)

int solution(Node* head){
    Node* slow = head;
    Node* fast = head;
    int count = 0;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            count++;
            slow = slow->next;
            while(slow != fast){
                count++;
                slow = slow->next;
            }
            return count;
        }
    }
    return 0;
}
