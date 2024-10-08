#include <bits/stdc++.h>
using namespace std;
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
    public:
        Node(){
            data = 0;
            next = NULL;
        }
};
Node* array_to_LL(int arr[], int n){
    Node* head = new Node(arr[0]);
    Node* cur = head;
    for(int i=1; i<=n-1; i++)
    {
        Node* temp = new Node(arr[i]);
        cur->next = temp;
        cur = cur->next;
    }
    return head;
}
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* reverse(Node* head){
    Node* prev = nullptr;
    Node* temp = head;
    Node* cur;
    while(temp != nullptr){
        cur = temp;
        temp = temp->next;
        cur->next = prev;
        prev = cur;
    }
    return cur;
}


//Optimal 
TC  : O(3N)
SC  : O(1)

Node* addOne(Node* head){
    Node* rev = reverse(head);
    int carry = 1;
    Node* temp = rev;
    while(temp != nullptr){
        int sum = carry + temp->data;
        temp->data = sum % 10;
        carry = sum / 10;
        temp = temp->next;
        if(carry == 0) break;
    }
    Node* result = reverse(rev);
    if(carry){
        Node* n = new Node(carry);
        n->next = result;
        return n;
    }
    return result;
}

int main() {
    int m = 4;
    int a_arr[m] = {5,6,8,7};
    Node* a = array_to_LL(a_arr,m);
    Node* d = addOne(a);
    printLL(d);
    return 0;
}
