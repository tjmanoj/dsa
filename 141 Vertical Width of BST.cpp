// TC : O(N log N)
// SC : O(H)
class Solution {
  public:
    void preorder(Node* root,unordered_set<int> &hash, int h){
        if(root == nullptr) return;
        
        preorder(root->left,hash,h-1);
        hash.insert(h);
        preorder(root->right,hash,h+1);
    }
    int verticalWidth(Node* root) {
        unordered_set<int> hash;
        preorder(root,hash,0);
        return hash.size();
    }
};
