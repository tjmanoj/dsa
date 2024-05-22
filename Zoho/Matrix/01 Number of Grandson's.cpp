#include <iostream>
using namespace std;

int main(){
    int row;
    cin >> row;
    string matrix[row][2];
    string grandpa;
    string son;
    int grandsonCount = 0;

    for(int i=0;i<row;i++){
        for(int j=0;j<2;j++){
            cin >> matrix[i][j];
        }
    }

    cin >> grandpa;

    // finding grandpa's son
    for(int i=0;i<row;i++){
        if(matrix[i][1] == grandpa){
            son = matrix[i][0];
            break;
        }
    }
    
    //finding the grandson's
    for(int i=0;i<row;i++)
        if(matrix[i][1] == son) grandsonCount++;
    
    // cout << son << endl;
    cout << grandsonCount;
}  

//  Given a two dimensional array of string like

//   <”luke”, “shaw”>
//   <”wayne”, “rooney”>
//   <”rooney”, “ronaldo”>
//   <”shaw”, “rooney”> 
// Where the first string is “child”, second string is “Father”. And given “ronaldo” we have to find his no of grandchildren Here “ronaldo” has 2 grandchildren. So our output should be 2.
