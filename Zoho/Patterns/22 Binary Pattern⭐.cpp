#include<iostream>
using namespace std;

int pow(int val,int n){
    int res = 1;
    for(int i=0;i<n;i++) res*=val;
    return res;
}

void binary(int n,int size){
    int res = 0;
    string s="";
    
    while(n != 0){
        string temp = "";
        temp += (n % 2) + '0';
        s =  temp + s;
        n /= 2;
    }
    if(s.size() < size){
        for(int i=0;i<size - s.size();i++) cout << "0 ";
    }
    
    for(auto i:s) cout << i << ' ';
    cout << endl;
}

int main(){
    int n;
    cin >>n;
    if(n == 1){
         cout << '0';
         return 0;
    }
    int range = pow(2,n);
    for(int i=0;i<range;i++) binary(i,n); 
}


// IP : 3
// 0 0 0 
// 0 0 1 
// 0 1 0 
// 0 1 1 
// 1 0 0 
// 1 0 1 
// 1 1 0 
// 1 1 1 
