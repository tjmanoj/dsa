#include <iostream>
using namespace std;
template<typename T1,typename T2>


struct Pair{
    T1 first;
    T2 second;
    
    Pair(): first(T1()),second(T2()){}
    Pair(const T1& key,const T2& value): first(key),second(value){}
};

class map{
    private:
        Pair<int,int>* m;
        int count;
        int size_t;
    
    public:
        map(int n): count(0),size_t(n){
            m = new Pair<int,int>[size_t];
        }
        
        ~map(){
            delete[] m;
        }
        
        void insert(int key,int value){
            
            m[count++] = Pair<int,int>(key,value);
        }
        
        void erase(int key){
            int ind = -1;
            
            for(int i=0;i<count;i++){
                if(m[i].first == key){
                    ind = i;
                    break;
                }
            }
            
            if(ind != -1){
                for(int i=ind;i<count-1;i++){
                    m[i] = m[i+1];
                }
                count--;
            }
        }
        
        int find(int key){
            for(int i=0;i<count;i++){
                if(m[i].first == key) return m[i].second;
            }
            
            return -1;
        }
        
        int size(){
            return count;
        }
};


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
            delete[] s;
        }
        
        void push(int data){
            s[last++] = data;
        }
        
        void pop(){
            last--;
        }
        
        int top(){
            return s[last-1];
        }
        
        bool empty(){
            return last == 0;
        }
};

class queue {
    private:
        int *q;
        int first;
        int last;
        int size;
    
    public:
        queue(int n): first(0),last(0),size(n){
            q = new int[n];
        }
        
        ~queue(){
            delete[] q;
        }
        
        void push(int data){
            q[last++] = data;
        }
        
        void pop(){
            first++;
        }
        
        int front(){
            return q[first];
        }
        
        bool empty(){
            return first == last;
        }
};  
