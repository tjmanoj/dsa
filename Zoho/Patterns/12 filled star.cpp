#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j >= n/2 && i >= j - n/2 && i <= j+n/2 && i+j <= (3 * n - 2) /2) cout << 'X';
            else cout << ' ';
        }
    
        cout << endl;
    }
    return 0;
}

//      X     
//     XXX    
//    XXXXX   
//   XXXXXXX  
//  XXXXXXXXX 
// XXXXXXXXXXX
//  XXXXXXXXX 
//   XXXXXXX  
//    XXXXX   
//     XXX    
//      X
