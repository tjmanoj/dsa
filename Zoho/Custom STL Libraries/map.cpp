#include <iostream>
using namespace std;

template <typename keyType,typename valueType>
class map{
private:
	struct Node{
		keyType key;
		valueType value;
		Node* left;
		Node* right;
		Node(const keyType &k,const valueType &v): key(k),value(v),left(nullptr),right(nullptr){}
	};

	Node* root;

	Node* insert(Node* node, const keyType &k,const valueType &v){
		if(node == nullptr){
			return new Node(k,v);
		}

		if(k < node->key){
			root->left = insert(node->left,k,v);
		}

		else if(k > node->key){
			root->right = insert(node->right,k,v);
		}

		else{
			node->value = v;
		}
		return node;
	}

	Node* find(Node* node,const keyType &key) const{
		if(node == nullptr || node->key == key) return node;
		if(key < node->key){
			return find(node->left,key);
		}
		else{
			return find(node->right,key);
		}

	}

public:
	map(): root(nullptr){}

	void insert(const keyType &k,const valueType &v){
		root = insert(root,k,v);
	}

	valueType& operator[](const keyType &key){
		Node* node = find(root,key);
		if(node == nullptr){
			insert(key, valueType());
            node = find(root, key);
		}
		return node->value;
	}

	valueType* find(const keyType& key) const{
		Node* node = find(root,key);
		if(node == nullptr) return nullptr;
		else return &(node->value);
	}
};

int main(){
	map<int,int>m;
	m.insert(1,2);
    m[4] = 3;
	cout << m[4];
	int * found = m.find(4);
	if(found == nullptr) cout << "NO";
	return 0;
}
