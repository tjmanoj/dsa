// TC : O(N)
// SC : O(H)
class Solution {
  public:
    void preorder(Node* root,int target,int& sum,bool& ans){
        if(root == nullptr) return;
        sum += root->data;
        if(root->left) preorder(root->left,target,sum,ans);
        if(root->right) preorder(root->right,target,sum,ans);
        
        if(root->left == nullptr && root->right == nullptr){
            if(sum == target) ans = true;
        }
        
        sum -= root->data;
        
    }
    bool hasPathSum(Node *root, int target) {
        bool ans = false;
        int sum = 0;
        preorder(root,target,sum,ans);
        return ans;
    }
    
};
