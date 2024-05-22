#include <iostream>
using namespace std;

// Original Code 
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=65;i<n+65;i++){
        int range = n+65-i;
        for(int j=0;j<range;j++) cout << (char)(i+j) << ' ';      // first half of each line

        for(int j=65;j<i;j++) cout << (char)j << ' ';             // second half of each line

        cout << endl;

    }
}

// A B C 
// B C A 
// C A B



// Concept Code  - Latin Pattern

// n = 3 
// 0 1 2
// 1 2 0            all the diagonals are same latin pattern
// 2 0 1

int main(){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int range = n-i;
        for(int j=0;j<range;j++) cout << i+j << ' ';      // first half

        for(int j=0;j<i;j++) cout << j << ' ';            // second half

        cout << endl;

    }
}


// 22.Given N. print the Latin Matrix (say N = 3). condition:  must not use strings(aka character literals), arrays (both 1D and 2D), inbuilt functions(like rotate).

// A   B   C
// B   C   A
// C   A   B
