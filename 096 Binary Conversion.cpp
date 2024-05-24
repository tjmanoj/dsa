#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;

    int i=1;        //this will do the reverse
                    // 1 10 100 1000 making the digit correct order

    int res = 0;

    while(n!=0){
        int rem = n % 2;

        res += (rem * i);

        n /= 2;
        i *= 10;
    }
    cout << res;
    return 0;
}
