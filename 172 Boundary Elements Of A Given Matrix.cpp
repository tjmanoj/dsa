#include <iostream>
using namespace std;

void print(int **a,int n,int m){
    
    for(int i=0;i<m;i++) cout << a[0][i] << ' ';
    if(n == 1) return;
    for(int i=1;i<n;i++) cout << a[i][m-1] << ' ';
    
    for(int i=m-2;i>=0;i--) cout << a[n-1][i] << ' ';
    
    for(int i=n-2;i>= 1;i--) cout << a[i][0] << ' ';
}

int main()
{
    int n,m;
    cin >> n >> m;
    int **a = new int*[n];
    
    for(int i=0;i<n;i++){
        a[i] = new int[m];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin >> a[i][j];
    }
    
    print(a,n,m);
}

INPUT 
3 3 
1 2 3
4 5 6
7 8 9

OUTPUT
1 2 3 6 9 8 7 4
