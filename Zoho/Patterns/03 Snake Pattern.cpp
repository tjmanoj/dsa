#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 1;
    for(int i=0;i<n;i++){
        if(i&1){                                              // odd rows => continue from sum + n - 1 decrementing
            int temp = sum + n - 1;
            sum += n;
            for(int j=0;j<n;j++) cout << temp-- << ' ';
        }
        else {                                                //even rows => continue from sum variable incrementing
            for(int j=0;j<n;j++) cout << sum++ << ' ';
        }
        cout << endl;
    }

}


// 21.Given N. print the following snake pattern (say N = 4). condition:  must not use arrays ( 1D array  or 2D array like Matrix ).
// 1   2   3   4
// 8   7   6    5
// 9   10  11   12
// 16  15  14  13
