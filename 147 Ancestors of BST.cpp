// TC : O(N)
// SC : O(H)

class Solution {
  public:
    void preorder(Node* root, vector<int> temp,int target, vector<int> &ans){
        if(root == nullptr) return;
        
        if(root->data == target) {
            ans = temp;
            return;
        }
        
        temp.push_back(root->data);
        preorder(root->left,temp,target,ans);
        preorder(root->right,temp,target,ans);
        temp.pop_back();
    }
    
    vector<int> Ancestors(struct Node *root, int target) {
        vector<int> ans;
        preorder(root,{},target,ans);
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
