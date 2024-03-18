/*
class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value, Node* address){
            data = value;
            next = address;
        }
    public:
        Node(int value){
            data = value;
            next = NULL;
        }
};
*/

// BF:
TC  : O(2N)
SC  : O(1)

Node* solution(Node* head){
    if(head->next == nullptr) return head;
    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    count = count / 2;
    temp = head;
    while(count != 0){
        temp = temp->next;
        count --;
    }
    return temp;
}



// Hare and Tortoise Optimal Approach ( use slow and fast pointers)
TC    : O(n / 2) 
SC    : O(1)

Node* solution(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
