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

BRUTE FORCE:
TC  : O(2N)
SC  : O(1)
Node* solution(Node* head){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == 0)
            count0++;
        else if(temp->data == 1)
            count1 ++;
        else count2 ++;
        temp = temp->next;
    }
    temp = head;
    while(temp != nullptr){
        if(count0 != 0){
            temp->data = 0;
            count0 --;
        }
        else if(count1 != 0){
            temp->data = 1;
            count1 --;
        }
        else{
            temp->data = 2;
            count2 --;
        }
        temp = temp->next;
    }
    return head;
}

//Optimal
TC    : O(n)
SC    : O(1)
Node* solution(Node* head){
    Node* p0 = nullptr;
    Node* p1 = nullptr;
    Node* p2 = nullptr;
    Node* temp = head;
    Node* first_node_of_0 = nullptr;
    Node* first_node_of_1 = nullptr;
    Node* first_node_of_2 = nullptr;
    
    while(temp != nullptr){
        if(temp->data == 0){
            if(p0){
                p0->next = temp;
                p0 = temp;
            }
            else{
                p0 = temp;
                first_node_of_0 = p0;
            }
        }
        else if(temp->data == 1){
            if(p1){
                p1->next = temp;
                p1 = temp;
            }
            else{
                p1 = temp;
                first_node_of_1 = p1;
            }
        }
        else if(temp->data == 2){
            if(p2){
                p2->next = temp;
                p2 = temp;
            }
            else{
                p2 = temp;
                first_node_of_2 = p2;
            }
        }
        temp = temp->next;
    }
    if(p0){
        if(p1) p0->next = first_node_of_1;
        else if(p2) p0->next = first_node_of_2;
        else p0->next = nullptr;
    } 
    if(p1){
        if(p2) p1->next = first_node_of_2;
        else p1->next = nullptr;
    }
    if(p2) p2->next = nullptr;
    if(p0) return first_node_of_0;
    if(p1) return first_node_of_1;
    return first_node_of_2;
}
