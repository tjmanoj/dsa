#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(i+j >= (n-1) && i >= (j-n+1)) cout << n-j%n;
            else cout << ' ';
        }
        cout << endl;
    }
}

//IP: 5
//     1    
//    215   
//   32154  
//  4321543 
// 543215432
