#include<iostream>
using namespace std;

int main(){
    int n1,n2,topSum=0,bottomSum = 0,diagonal = 0;
    cin >> n1 >> n2;
    int matrix[n1][n2];

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin >> matrix[i][j];
        }
    }

    // for(int i=0;i<n1-1;i++){
    //     for(int j=0;j<n2-i-1;j++){      // top left triangle
    //         topSum += matrix[i][j];
    //     }
    // }

    // for(int i=1;i<n1;i++){
    //     for(int j=n2-i;j<n2;j++){
    //         bottomSum += matrix[i][j];    // bottom right triangle
    //     }
    // }

    for(int i=0;i<n1;i++){                    // both in single try
        for(int j=0;j<n2;j++){
            if(i >= 0 && i < n1-1 && j>=0 && j<n2-i-1) topSum += matrix[i][j];        
            else if(i >=1 && i<n1 && j>=n2-i && j<n2) bottomSum += matrix[i][j];
            else diagonal += matrix[i][j];    // diagonal
        }
    }
    
    int topTriangle = topSum + diagonal;
    int bottomTriangle = bottomSum + diagonal;

    if(topTriangle > bottomTriangle) cout << topTriangle;
    else cout << bottomTriangle;
    
}



// Given a matrix print the largest of the sums of the two triangles split by diagonal from top right to bottom left

// I/P:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// O/P: 38
