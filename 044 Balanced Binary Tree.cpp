// BruteForce
//TC  : O(N^2)
//SC  : O(N)  stack space

class solution {
    public:
    int height(Node* root){
        if(root == NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return 1 + max(left,right);
    }
    bool balanced (Node* root) {
            if(root == NULL ) return 1;
            int left = height(root->left);
            int right = height(root->right);
            int h = abs(left - right);
            if(h > 1) return 0;
            balanced(root->left);
            balanced(root->right);
    }
};


// Optimal
//TC  : O(N)
//SC  : O(N)

class solution {
    public:
    int height(Node* root, bool &flag){
        if(root == NULL) return 0;
        int left = height(root->left,flag);
        int right = height(root->right,flag);
        int diff = abs(left - right);
        
        if(diff > 1) flag = false;
        
        return 1 + max(left,right);
    }
    bool balanced (Node* root) {
        bool flag = true;
        height(root,flag);
        return flag;
    }
};
