// TC : O(N)
// SC : O(N)

class Solution {
  public:
    Node* BST(vector<int>& a,int low,int high){
        if(low > high) return nullptr;
        if(low == high) return new Node(a[low]);
        
        int mid = low + (high - low) /2;
        Node* root = new Node(a[mid]);
        root->left = BST(a,low,mid-1);
        root->right = BST(a,mid+1,high);
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        return BST(nums,0,nums.size()-1);

    }
};
