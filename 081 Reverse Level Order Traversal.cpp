// TC  : O(N)      
// SC  : O(N)

void BFS(Node* root, vector<int> &ans){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        
            Node* temp = q.front();
            q.pop();
            if(temp->right) q.push(temp->right);
            if(temp->left) q.push(temp->left);
            ans.push_back(temp->data);
 
        
    }
}
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> ans;
    BFS(root,ans);                      //O(N)
    reverse(ans.begin(),ans.end());    //O(N/2)
    return ans;
}
