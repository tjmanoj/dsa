// TC  : O(N)
// SC  : O(H)

class Solution
{
    public:
    // function should print the nodes at k distance from root
    void bfs(Node* root, vector<int> &ans,int k){
        queue<Node*> q;
        q.push(root);
        int count = 0;
        while(!q.empty()){
            int l = q.size();
            while(l--){
                Node* cur = q.front();
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                if(count == k) ans.push_back(cur->data);
            }
            count++;
            if(count > k) break;
        }
    }
    
    vector<int> Kdistance(struct Node *root, int k)
    {
      vector<int> ans;
      bfs(root,ans,k);
      return ans;
    }
};
