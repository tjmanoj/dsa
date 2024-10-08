// BF
TC  : O(N)
SC  : O(N)


// Optimal
TC  : O(N)
SC  : O(1)

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
Node* solution(Node* head){
    Node* cur;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        cur = temp;
        temp = temp->next;
        cur->next = prev;
        prev = cur;
    }   
    return prev;
}
