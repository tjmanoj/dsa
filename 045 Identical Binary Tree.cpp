// As we know once we traverse the smallest binary tree given, we can definitely say where they are identical
// TC  : O(min(t1,t2))
// SC  : O(min(t1,t2))

class solution {
public:
    bool isSameTree(Node* root1, Node* root2){
        if(!root1 && !root2) return true;
        if(!root1 && root2 || root1 && !root2) return false;
        
        if(root1->data != root2->data) return false;
        bool a = isSameTree(root1->left,root2->left);
        bool b = isSameTree(root1->right,root2->right);
        return a && b;
    }
};
