// Pascal's Triangle, where each number is the sum of the two numbers directly above it in the previous row. 

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++){
        
        for(int k = 0; k < n - i;k++) cout << ' ';      // space 
        
        int prev = 1;
        
        for(int j = 1; j <= i; j++){
            cout << prev << ' ';
            
            prev = prev * (i - j) / j;          // update prev value   =  prev * (row - jth num) / jth num 
        }
        cout << endl;
        
    }
    return 0;        
}

// IP 5
//     1    
//    1 1   
//   1 2 1  
//  1 3 3 1 
// 1 4 6 4 1






// Using 11^2 method, it will not print space between them
#include <iostream>
using namespace std;

int pow(int n,int m){
    int tot = 1;
    for(int i=0;i<m;i++) tot *= n;
    return tot;
}
int main(){
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i;j++) cout << ' ';
         cout << pow(11,i) << endl;
    }
}

 //    1
 //   11
 //  121
 // 1331
