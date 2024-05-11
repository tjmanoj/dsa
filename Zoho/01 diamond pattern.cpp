//    1 
//   3 2 
//  6 5 4 
// 10 9 8 7 
// 10 9 8 7 
//  6 5 4 
//   3 2 
//    1 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    int space = n-1;
    int start = 1;

    for(int i=1;i<=n;i++){
        
        int temp = start;

        for(int k=0;k<space;k++) cout << " ";

        for(int j=0;j<i;j++) cout << temp-- << " ";

        space--;
        start += (i+1);
        cout << endl;
    }
    
    start -= (n+1);
    space = 0;
    for(int i=n;i>0;i--){
        
        int temp = start;

        for(int k=0;k<space;k++) cout << " ";

        for(int j=0;j<i;j++) cout << temp-- << " ";

        space++;
        start = temp;
        cout << endl;
    }
}
