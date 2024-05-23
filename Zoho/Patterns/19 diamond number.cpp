#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int top_space = n-1;
    int sum = 0;

    for(int i=1;i<=n*2;i++){
        
        if(i<=n){                                               //upper part
            //space
            for(int k=0;k<n-i;k++) cout << ' ';

            //pattern
            sum += i;
            int temp = sum;
            
            for(int k=0;k<i;k++) cout << temp-- << ' ';
        }
        else{                                                   //lower part
            //space
            for(int k=0;k<i-n-1;k++) cout << ' ';

            //pattern
            for(int k=0;k<n-i%(n+1);k++) cout << sum-- << ' ';
        }
        cout <<endl;
    }
}

// INPUT n = 4
//    1 
//   3 2 
//  6 5 4 
// 10 9 8 7 
// 10 9 8 7 
//  6 5 4 
//   3 2 
//    1 
