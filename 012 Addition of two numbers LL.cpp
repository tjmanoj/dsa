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


Node* solution(Node* head1, Node* head2){
    Node* ans = new Node(0);
    Node* temp = ans;
    int carry = 0;
    while(head1 || head2){
        int sum = carry;
        if(head1){
            sum += head1->data;
            head1 = head1->next;
        } 
        if(head2){
            sum += head2->data;
            head2 = head2->next;
        } 
        Node* n = new Node(sum % 10);
        temp->next = n;
        carry = sum /10;
        temp = temp->next;
    }
    if(carry) temp->next = new Node(1);
    return ans->next;
}

int main() {
    int m = 3,n = 2;
    int a_arr[m] = {6,8,9};
    int b_arr[n] = {8,3};
    Node* a = array_to_LL(a_arr,m);
    Node* b = array_to_LL(b_arr,n);
    Node* c = add_two_numbers(a,b);
    printLL(c);
    return 0;
}


// 3 2
// 6 8 9
// 8 3

// OP : 4 2 0 1
