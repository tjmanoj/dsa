#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int col = n*2 -1;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<col;j++){
            if(i+j >= n-1 && i >= j-n+1) cout << 'X';
            else cout << ' ';
        }
    
        cout << endl;
    }
    return 0;
}


//     X    
//    XXX   
//   XXXXX  
//  XXXXXXX 
// XXXXXXXXX

//Break downs

//     X    
//    X     
//   X             i+j == n-1
//  X       
// X

// X    
//  X   
//   X          i == j-n+1
//    X 
//     X
