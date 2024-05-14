#include <iostream>
using namespace std;

//consider each array as a whole number

int main(){
    int n,num;
    cin >> n;
    int a[n];
    int total = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(auto k:a){
        int temp = 0;
        for(int i=0;i<k;i++){
            cin >> num;
            temp = temp * 10 + num;
        }
        total += temp;
    }

    cout << total;

    return 0;
}


// Given n integer arrays of different size, find the addititon of numbers represented by the arrays

// I/P:
// 4
// 3 5 4 2
// 2 4 5
// 4 5 6 7 8
// 4 9 2 1
// 1 2

// O/P: 50856
