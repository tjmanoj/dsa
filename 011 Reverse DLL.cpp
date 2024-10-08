#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    
    public:
        Node(int value, Node* next_address, Node* prev_address){
            data = value;
            next = nullptr;
            prev = nullptr;
        }
};

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
      cout << temp->data << " ";
      temp = temp->next;
  }
}


Node* createLL(int a[], int n){
    Node* head = new Node(a[0], nullptr, nullptr);
    Node* temp = head;
    
    for(int i=1;i<n;i++){
        Node* newnode = new Node(a[i], nullptr, nullptr);
        newnode->prev = temp;
        temp->next = newnode;
        temp = temp->next;
    }
    return head;
}
Node* solution(Node* head){
  Node* back;
  Node* cur = head;
  while(cur != nullptr){
    back = cur->prev;
    cur->prev = cur->next;
    cur->next = back;
    cur = cur->prev;
  }
  return back->prev;
}

int main() {
  int a[5] = {1,2,3,4,5};
  Node* head = createLL(a, 5);
  
  Node* temp = solution(head);
  print(temp);
  return 0;
}


// Solution using stack
Node* solution(Node* head){
    stack<int> s;
    Node* temp = head;
    while(temp != nullptr){
        s.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp != nullptr){
        temp->data = s.top();
        s.pop();
        temp= temp->next;
    }
    return head;
}
