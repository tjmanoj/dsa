#include <iostream>
using namespace std;

template<typename VAL>
class stack{
    private:
        struct Node{
            VAL val;
            Node* next;
            Node(const VAL &v): val(v),next(nullptr){}
        };

        Node* topNode;
        int _size;

    public:
        stack(): topNode(nullptr),_size(0){}

        void push(const VAL &v){
            Node* newnode = new Node(v);
            newnode->next = topNode;
            topNode = newnode;
            _size++;
        }

        VAL& top() const{
            if(topNode == nullptr) throw out_of_range("Empty");
            return topNode->val;
        }

        void pop(){
            if(topNode == nullptr) throw out_of_range("Empty");
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
            _size--;
        }

        int size() const{                               // const is must needed
            return _size;
        }

        bool empty() const{
            return _size == 0;
        }
        
};
