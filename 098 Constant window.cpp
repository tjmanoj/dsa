#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int a[n];

    for(int i=0;i<n;i++) cin >> a[i];

    //constant window
    int l = 0,r = k-1;
    int sum = 0;

    for(int i=0;i<k;i++){
         sum += a[i];
    }

    int maxSum = sum;

    while(r < n-1){
        sum -= a[l];
        sum += a[r+1];

        if(sum > maxSum) maxSum = sum;

        r++;
        l++;
    }

    cout << maxSum;
}

// 7 4
// 8 1 2 1 5 0 9
