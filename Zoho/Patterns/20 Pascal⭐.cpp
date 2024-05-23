// Pascal's Triangle, where each number is the sum of the two numbers directly above it in the previous row. 

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int mat[n][2*n-1];
    
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(i+j == (2*n-1)/2 || i == j - (2*n-1)/2) mat[i][j] = 1;
            else mat[i][j] = 0;
        }
    }
    
    for(int i=1;i<n;i++){
        for(int j=1;j<2*n-2;j++){
            if(mat[i-1][j-1] != 0 && mat[i-1][j+1] != 0){
                mat[i][j] = mat[i-1][j-1] + mat[i-1][j+1];
            }
        }
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(i+j >= (2*n-1)/2 || i >= j - (2*n-1)/2) {
                if(mat[i][j] != 0) cout << mat[i][j];
                else cout << ' ';
            }
        }
        cout << endl;
    }
    
}

// IP 5
//     1    
//    1 1   
//   1 2 1  
//  1 3 3 1 
// 1 4 6 4 1
