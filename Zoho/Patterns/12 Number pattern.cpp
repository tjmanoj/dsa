#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << max(abs(i-n/2),abs(j-n/2));
        }
    
        cout << endl;
    }
    return 0;
}

//ip 10
// 5555555555
// 5444444444
// 5433333334
// 5432222234
// 5432111234
// 5432101234
// 5432111234
// 5432222234
// 5433333334
// 5444444444
