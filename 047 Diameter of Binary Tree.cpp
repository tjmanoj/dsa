//Bruteforce
//TC  : O(N^2)    // one n is for visiting all nodes and one n is for height calculation, so n time n
//SC  : O(H)    // in worst case O(N)

class Solution {
public:
    int diameter = -1;
    int height(TreeNode* root){
        if(root == nullptr) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return 1 + max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        int left = height(root->left);
        int right = height(root->right);
        if(left + right > diameter) diameter = left + right;
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return diameter;

    }
};

//Optimal
//TC  : O(N)
//SC  : O(H)

class solution{
    public:
    int height(Node* root,int &ans){
        if(root == NULL) return 0;
        int left = height(root->left,ans);
        int right = height(root->right,ans);
        if(left + right > ans) ans = left+right;      // aslo can be ans = max(ans,left+right)
        return 1 + max(left,right);
    }
    int diameterOfBinaryTree(Node* root){
        int ans=0;
        height(root,ans);
        return ans;
    }
};

