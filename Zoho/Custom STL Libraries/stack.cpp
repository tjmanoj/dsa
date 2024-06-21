#include <iostream>
using namespace std;

class stack{
    private:
        int *s;
        int last;
        int size;
    
    public:
        stack(int n): last(0),size(n){          
            s = new int[size];   
        }
        
        ~stack(){
            delete []s;
        }
        
        void push(int value){
            s[last++] = value;
        }
        
        void pop(){
            if(!empty()){
                last--;
            }
        }
        
        int top(){
            if(!empty()){
                return s[last-1];
            }
            return -1;
        }

        bool empty(){
            return last == 0;
        }
};
int main(){
    stack s(10);
    s.push(12);
    s.push(13);
    s.push(14);

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}

