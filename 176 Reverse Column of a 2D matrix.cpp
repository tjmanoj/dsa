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
        for(int j=0;j<m/2;j++) swap(a[i][j],a[i][m-1-j]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cout << a[i][j] << ' ';
        cout << endl;
    }
}
