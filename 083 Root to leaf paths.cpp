// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(height of the tree)

class Solution {
  public:
    void preorder(Node* root,vector<vector<int>> &ans,vector<int> path){
        if(root == NULL) return;
        path.push_back(root->data);
        
        if(root->left == NULL && root->right == NULL) ans.push_back(path);
        
        preorder(root->left,ans,path);
        preorder(root->right,ans,path);
    }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> ans;
        preorder(root,ans,{});
        return ans;
    }
};
