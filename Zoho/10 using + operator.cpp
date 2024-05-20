#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cin >> n1 >> n2;

    //sub
    cout << n1 + (-n2) << endl;

    // multiplication   
    int sum = 0;
    for(int i=0;i<abs(n2);i++)
        sum = sum + abs(n1);

    if(n1 < 0 && n2 < 0) cout << sum << endl;
    else if(n1 < 0 || n2 < 0) cout << -sum << endl;
    else cout << sum << endl;

    //Division
    int count = 0;
    int N1 = abs(n1);
    int N2 = abs(n2);
    while(abs(N1) >= abs(N2)){
        N1 = N1 + (-N2);
        count++;
    }
    if(n1 < 0 && n2 < 0 ) cout << count;
    else if(n1 < 0 || n2 < 0) cout << -count;
    else cout << count ;
}

//  Find the result subtraction, multiplication, division of two integers using + operator.

// Input: 6 and 4

// output:

// addition 6+4 = 10,    subtraction  6+(-4) = 2,   multiplication = 24,   division = 1

// Input : -8 and -4

// Output:

// addition -8+(-4) = -12,    subtraction  (-8)+(-(-4)) = -4,   multiplication = 32,   division = 2
