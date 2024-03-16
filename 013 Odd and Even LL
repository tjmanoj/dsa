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

//Optimal
TC: O(n/2)
SC: O(1)

Node* solution(Node* head){
    Node* even = head;
    Node* odd = head->next;
    Node* oddHead = head->next;
    while(odd != nullptr && odd->next != nullptr){
        even->next = even->next->next;
        odd->next = odd->next->next;
        even = even->next;
        odd = odd->next;
    }
    even->next = oddHead;
    return head;
}



//Brute Force
TC : O(2N)
SC : O(n)
Node* solution(Node* head){
    if(head->next == nullptr) return head;
    Node* temp = head;
    Node* even = new Node(temp->data);
    Node* odd = new Node(temp->next->data);
    Node* tempEven = even;
    Node* tempOdd = odd;
    temp = temp->next->next;
    int count = 2;
    while(temp != nullptr){
        if(count % 2 == 1){
            tempOdd->next = new Node(temp->data);
            tempOdd = tempOdd->next;
        }
        else{
            tempEven->next = new Node(temp->data);
            tempEven = tempEven->next;
        }
        count ++;
        temp = temp->next;
    }
    tempEven->next = odd;
    return even;
}
