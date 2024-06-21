#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int val): data(val),left(nullptr),right(nullptr){}
};


void preorder(Node* root){
    if(root == nullptr) return;
    cout << root->data << ' ';
    preorder(root->left);
    preorder(root->right);
}



int k = 0;
Node* generateTree(int a[],int n){
    if(n == k) return nullptr;          // all the nodes added
    
    int val = a[k++];
    
    if(val == -1) return nullptr;       // leaf node came
    Node* root = new Node(val);
    root->left = generateTree(a,n);
    root->right = generateTree(a,n);
    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    
    Node* tree = generateTree(a,n);
    preorder(tree);
}


// 7
// 1 2 -1 -1 3 -1 -1

// OUTPUT: 1 2 3
