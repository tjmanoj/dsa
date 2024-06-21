#include <iostream>
using namespace std;

class queue{
    private:
        int *q;
        int first;
        int last;
        int size;
    
    public:
        queue(int n): first(0),last(0),size(n){
            
            q = new int[size];
            
        }
        
        ~queue(){
            delete []q;
        }
        
        void push(int value){
            q[last++] = value;
        }
        
        void pop(){
            if(!empty()){
                first++;
            }
        }
        
        int front(){
            if(!empty()){
                return q[first];
            }
            return -1;
        }

        bool empty(){
            return first == last;
        }

};
int main(){
    queue q(10);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout << q.front();
        q.pop();
    }    
}

