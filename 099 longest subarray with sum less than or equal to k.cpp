
//  longest subarray with sum <= k.cp
#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int a[n];

    for(int i=0;i<n;i++) cin >> a[i];

    //longest subarray length with sum <= k
    int l = 0,r = 0;
    int sum = 0;

    int maxLen = 0;

    while(r < n){
        
        sum += a[r];
        if(sum > k) sum -= a[l++];                        // if we want to find the the number of subarrays, then we will need to increate the l++ until the sum become <= k
                                                          // while(sum > k) sum -= a[l++]
        
        if(sum <= k){
            if(r-l+1 > maxLen) maxLen = r - l + 1;
        }
        r++;
    }

    cout << maxLen;
}


// 11 4
// 8 1 2 1 5 0 9 1 1 1 1
