#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i<n*2-1;i++){
        for(int j=0;j<n*2-1;j++){
            if(i+j >= (n*2-1)/2 && i >= j - (n*2-1)/2 && i <= j+(n*2-1)/2 && i+j <= (6 * n - 5) /2) cout << 'X';
            else cout << ' ';
        }
    
        cout << endl;
    }
    return 0;
}

// 4
//    X   
//   XXX  
//  XXXXX 
// XXXXXXX
//  XXXXX 
//   XXX  
//    X 
