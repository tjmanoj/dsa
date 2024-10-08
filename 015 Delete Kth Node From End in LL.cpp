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

//Brute Force Method 1  
TC  : O(2N)
SC  : O(1)

*/
Node* solution(Node* head, int k){
    if(head == nullptr || head->next == nullptr) return nullptr;
        Node* temp = head;
        int count = 0;
        while(temp != nullptr){
            count ++;
            temp = temp->next;
        }
        temp = head;
        if(count == k+1) return head->next;
        while(temp != nullptr){
            if(count == k + 2){
                Node* n = temp->next;
                temp->next = temp->next->next;
                delete n;
            }
            count --;
            temp = temp->next;
        }
        return head;
}



// BruteForce Method 2  => same TC and SC
Node* solution(Node* head, int k){
    if(head == nullptr || head->next == nullptr) return nullptr;
        Node* temp = head;
        int n = 0;
        while(temp != nullptr){
            n ++;
            temp = temp->next;
        }
        int k1 = n - 1 - k; // deleting node position
        temp = head;
        if(k1 == 0) return head->next;
        int count = 0;
        while(temp != nullptr){
            if(count == k1 - 1){
                Node* n = temp->next;
                temp->next = temp->next->next;
                delete n;
            }
            count ++;
            temp = temp->next;
        }
        return head;
}


// Optimal
TC  : O(n)
SC  : O(1)

Node* solution(Node* head, int k){
    Node* front = head;
    Node* back = head;
    for(int i=0;i<k+1;i++) back = back->next;
    if(back == nullptr) return head->next;            // this condition is for deleting head node. 
    while(back->next != nullptr){
        front = front->next;
        back = back->next;
    }
    Node* delnode = front->next;
    front->next = front->next->next;
    delete delnode;
    return head;
}
