// Better
TC  : O(m + 2N) where m is length of shorter LL and n is longer  (2N => for finding length one N and for adjusting to correct position one N)
SC  : O(1)

Node* solution(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    int size1=0,size2=0;
    while(temp1!=nullptr){
        size1++;
        temp1 = temp1->next;
    }
    while(temp2!=nullptr){
        size2++;
        temp2 = temp2->next;
    }
    int difference = abs(size1 - size2);
    temp1 = head1;
    temp2 = head2;
    if(size1 > size2) while(difference--) temp1 = temp1->next;
    if(size2 > size1) while(difference--) temp2 = temp2->next;
    
    while(temp1 != nullptr){
        if(temp1 == temp2) return temp1;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return nullptr;
}

// Optimal
TC  : O(m+n)
SC  : O(1)

Node* solution(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    while(temp1 != temp2){
        temp1 = temp1->next;
        temp2 = temp2->next;
        if(temp1 == temp2) return temp1;
        if(temp1 == nullptr) temp1 = head2;
        if(temp2 == nullptr) temp2 = head1;
    }
    return nullptr;
}
