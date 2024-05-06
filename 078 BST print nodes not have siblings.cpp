// TC  : O(N)    // visit all nodes
// SC  : O(H)

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */


void preorder(Node* root,vector<int> &ans){
    if(root == NULL) return;
    else if(root->left && !root->right) ans.push_back(root->left->data);
    else if(root->right && !root->left) ans.push_back(root->right->data);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
vector<int> noSibling(Node* node)
{
    vector<int> ans;
    preorder(node,ans);
    if(ans.size() == 0) return {-1};
    sort(ans.begin(),ans.end());
    return ans;
}
