#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<4*n+5;j++){                            // 3  +  4n  + 2
            if((i+j%4) == n-1 || i == j%4) cout << 'X';      // we are taking mod to j to copy the same pattern to right side.
            else cout << ' ';
        }
    
        cout << endl;
    }
    return 0;
}

// X   X   X   X   X   X   X
//  X X X X X X X X X X X X 
//   X   X   X   X   X   X  
//  X X X X X X X X X X X X 
// X   X   X   X   X   X   X


// break throws

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2;j++){
            if(i+j%n == n-1) cout << 'X';
            else cout << ' ';
        }
    
        cout << endl;
    }
    return 0;
}

//     X    X
//    X    X 
//   X    X  
//  X    X   
// X    X 
