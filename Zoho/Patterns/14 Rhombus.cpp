#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << abs(i-n/2) + abs(j-n/2);
        }
    
        cout << endl;
    }
    return 0;
}

// 43234
// 32123
// 21012
// 32123
// 43234
