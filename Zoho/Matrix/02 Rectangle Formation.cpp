#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    int mat[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        cin >> mat[i][j];
    }

    int startX,startY,endX,endY;
    cin >> startX >> startY;
    cin >> endX >> endY;

    int breadth = abs(startY-endY);
    int height = abs(startX - endX);

    if(breadth == height) cout << "Cannot form Rectangle" << endl;
    else{
        int sum=0;
        cout << "Rectangle" << endl;
        for(int i=startX;i<=endX;i++){
            for(int j=startY;j<=endY;j++){
                sum += mat[i][j];
                cout << mat[i][j] << ' ';
            }
            cout << endl;
        }
        cout << "sum : " << sum;
    }

    return 0;
}

// Given two dimensional matrix of integer and print the rectangle can be formed using given indices and also find the sum of the elements in the rectangle

// Input: mat[M][N] = {{1, 2, 3, 4, 6}, {5, 3, 8, 1, 2}, {4, 6, 7, 5, 5}, {2, 4, 8, 9, 4} };

// index = (2, 0) and (3, 4)

// Output:

// Rectangle

// 4 6 7 5 5

// 2 4 8 9 4

// sum 54
