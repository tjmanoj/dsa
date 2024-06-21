#include <iostream>
using namespace std;
#define MAX 1000

class queue{
    private:
        int q[MAX];
        int first;
        int last;
    
    public:
        queue(): first(0),last(0){}

        void push(int value){
            q[last++] = value;
        }
        
        void pop(){
            if(!empty()){
                first++;;
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

