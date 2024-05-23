#include <iostream>
using namespace std;

int main(){
   int n;
   cin >> n;
   
   for(int i=0;i< 2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        int top = i;
        int left = j;
        int right = (2*n-2) - j;
        int bottom = (2*n-2) - i;
        cout << n- min(min(top,left),min(right,bottom));
    }
    cout << endl;
   }

}

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
