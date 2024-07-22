// TC : O(N*M)
// SC : O(1)

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin >> a[i][j];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i & 1){
                cout << a[i][n-1-j] << ' ';
            }
            else cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
