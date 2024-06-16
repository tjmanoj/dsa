// TC   : O(logn)
// SC   : O(1)

#include <iostream>
using namespace std;

int sqrt(int n){
    int low = 0;
    int high = n;
    int ans = 0;
    
    while(low <= high){
        long long mid = low + (high-low)/2;
        if(mid * mid <= n){
            ans = mid;
            low = mid + 1;                  // this may be an answer, but we can have greater answer.
        }
        else high = mid - 1;
    }
    return ans;
    
    
}
