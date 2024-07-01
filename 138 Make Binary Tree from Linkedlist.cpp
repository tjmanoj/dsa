// TC : O(N)
// SC : O(N)

class Solution {
public:
    TreeNode* createTree(vector<int> &temp,int i){
        if(i >= temp.size()) return nullptr;
        TreeNode* newnode = new TreeNode(temp[i]);
        newnode->left = createTree(temp,2*i+1);
        newnode->right = createTree(temp,2*i+2);
        return newnode;
    }
    
    void convert(Node *head, TreeNode *&root) {
        vector<int> temp;
        while(head){
            temp.push_back(head->data);
            head = head->next;
        }
        root = createTree(temp,0);
        
    }
};
