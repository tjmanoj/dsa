#include <iostream>
using namespace std;

template<typename VAL>
class queue{
    private:
        struct Node{
            VAL val;
            Node* next;
            Node(const VAL &v): val(v),next(nullptr){}
        };

        Node* frnt;
        Node* rear;
        int _size;

    public:
        queue(): frnt(nullptr),rear(nullptr),_size(0){}

        void push(const VAL &v){
            Node* newnode = new Node(v);
            if(rear == nullptr){
                frnt = rear = newnode;
            }
            else{
                rear->next = newnode;
                rear = newnode;
            }
            _size++;
        }

        VAL& front() const{
            if(rear == nullptr) throw out_of_range("Empty");
            return frnt->val;
        }

        void pop(){
            if(frnt == nullptr) throw out_of_range("Empty");

            Node* temp = frnt;
            frnt = frnt->next;
            delete temp;
            _size--;
            
            if(frnt == nullptr) rear = nullptr;               // if front null means we shoud update the rear
        }       

        int size() const{
            return _size;
        }

        bool empty() const{
            return _size == 0;
        }
        
};

int main(){
    queue<int> q;
    q.push(1);
    q.push(12);
    q.push(123);
    
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    
}

