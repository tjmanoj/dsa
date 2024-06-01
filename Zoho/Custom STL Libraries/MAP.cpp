template <typename KEY, typename VAL>
class map{
    private:
        struct Node{
            KEY key;
            VAL val;
            Node* left;
            Node* right;
            Node(const KEY &k, const VAL &v): key(k),val(v),left(nullptr),right(nullptr){}
        };
        Node* root;

        Node* insert(Node* node,const KEY &k, const VAL &v){
            if(node == nullptr) return new Node(k,v);
            if(k < node->key)       node->left = insert(node->left,k,v);
            else if(k > node->key)  node-> right = insert(node->right,k,v);
            else root->val = v;
            return node; 
        }

        Node* find(Node* node, const KEY &k) const {
            if(node == nullptr || node->key == k) return node;
            if(k < node->key) return find(node->left,k);
            return find(node->right,k);
        }
        
        Node* findMin(Node* node)const{
            while(node && node->left) node = node->left;
            return node;
        }

        Node* erase(Node* node, const KEY &k){
            if(!node) return nullptr;
            if(k < node->key) node->left = erase(node->left,k);
            if(k > node->key) node->right = erase(node->right,k)
            else{
                if(!root->left){
                    Node* temp = node->right;
                    delete node;
                    return temp;
                }
                if(!root->right){
                    Node* temp = node->left;
                    delete node;
                    return temp;
                }
                Node* temp = findMin(node->right);
                node->key = temp->key;
                node->val = temp->val;
                delete temp;
                node->right = erase(node->right,temp->key);
            }
            return node;
        }

    
    public:
        map(): root(nullptr){}

        void insert(const KEY &k, const VAL &v){
            root = insert(root,k,v);
        }

        void erase(const KEY &k){
            root = erase(root,k);
        }

        VAL& operator[] (const KEY &k){
            Node* node = find(root,k);
            if(node == nullptr) insert(k, VAL());
            node = find(root,k);
            return node->val;
        }

        VAL* find(const KEY &k) const{
            Node* node = find(root,k);
            if(node == nullptr) return nullptr;
            return &(node->val);
        }
};
