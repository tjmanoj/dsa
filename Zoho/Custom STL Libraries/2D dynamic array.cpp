#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int **matrix;                  // 2d initialization

    matrix = new int*[n];          //2d array created of size n

    for(int i=0;i<n;i++){
        matrix[i] = new int[4];    // 1d array of size 4
    }


    //Input
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin >> matrix[i][j];
        }
    }


    // Printing
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

}
