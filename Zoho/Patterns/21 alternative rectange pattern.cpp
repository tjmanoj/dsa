#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char mat[n][m];
    
    int i = 0,j = m;
    
    char c = 'X';
    
    // edge case        n < m and both are even (n=6 and m= 8)
  
    if(n%2 == 0 && m%2 == 0 && n < m) j = n/2 + 2;
    
    while(i < j){
        
        //top and bottom
        for(int k=i;k<m-i;k++){
             mat[i][k] = c;              // top
             mat[n-i-1][k] = c;          // bottom
        }
        
        //left and right
        for(int k=i;k<n-i;k++){
            mat[k][i] = c;              //left
            mat[k][m-i-1] = c;          //right
        }
        
        i++;
        j--;
        c = (c == 'X')? 'O': 'X';

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

// ip 7 7

// X X X X X X X 
// X O O O O O X 
// X O X X X O X 
// X O X O X O X 
// X O X X X O X 
// X O O O O O X 
// X X X X X X X 
