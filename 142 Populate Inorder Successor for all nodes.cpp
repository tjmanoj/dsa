
// TC : O(N)
// SC : O(1)

class Solution {
  public:
    Node* prev = nullptr;
    
    void inorder(Node* root){
        if(root == nullptr) return;
        
        inorder(root->left);
        if(prev != nullptr){
            prev->next = root;
        }
        prev = root;
        
        inorder(root->right);
        
    }
    void populateNext(Node *root) {
        inorder(root);
    }
};
