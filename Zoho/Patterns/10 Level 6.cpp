#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            if(i == j%8 || i+j%8 == 8) cout << (char)(65+j);
            else cout << ' ';
        }
    
        cout << endl;
    }
    return 0;
}


// A       I       Q       Y 
//  B     H J     P R     X Z
//   C   G   K   O   S   W   
//    D F     L N     T V    
//     E       M       U  
