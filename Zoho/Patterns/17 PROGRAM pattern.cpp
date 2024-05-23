#include <iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int n=word.size();
    string new_word = "";
    for(int i=n/2;i<word.size();i++) new_word += word[i];
    for(int i=0;i<n/2;i++) new_word += word[i];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == n-1 && j==n-1) cout << new_word[n-1];           // last corner box edge case
            else if(i+j >= n-1) cout << new_word[(i+j)%(n-1)];
            else cout << ' ';
        }
    
        cout << endl;
    }
    return 0;
}

// Given an odd length word which should be printed from the middle of the word.

// The output should be in the following pattern.

// Example:

// Input: PROGRAM

// Output:
//       G
//      GR
//     GRA
//    GRAM
//   GRAMP
//  GRAMPR
// GRAMPRO
