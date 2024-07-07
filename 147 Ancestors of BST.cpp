// TC : O(N)
// SC : O(H)

class Solution {
  public:
    // Function should return all the ancestor of the target node
    void preorder(Node* root, vector<int> &ans,int target, vector<int> &ansesters){
        if(root == nullptr) return;
        
        if(root->data == target) {
            ansesters = ans;
            return;
        }
        
        ans.push_back(root->data);
        preorder(root->left,ans,target,ansesters);
        preorder(root->right,ans,target,ansesters);
        ans.pop_back();
        
    }
    
    vector<int> Ancestors(struct Node *root, int target) {
        vector<int> ans,ansesters;
        preorder(root,ans,target,ansesters);
        reverse(ansesters.begin(),ansesters.end());
        return ansesters;
    }
};
