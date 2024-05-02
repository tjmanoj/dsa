class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    int i = 0;
    void preorder(Node* root, vector<int> &serial){
        if(root == NULL){
            serial.push_back(-1);
            return;
        }
        serial.push_back(root->data);
        preorder(root->left,serial);
        preorder(root->right,serial);
    }
    vector<int> serialize(Node *root) 
    {
        vector<int> serial;
        preorder(root,serial);
        return serial;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       if(A.size() == i) return NULL;
       int val = A[i];
       i++;
       if(val == -1) return NULL;
       Node* root = new Node(val);
       root->left = deSerialize(A);
       root->right = deSerialize(A);
       return root;
    }

};
