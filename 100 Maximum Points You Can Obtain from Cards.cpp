// TC : O (K)
// SC  : O(1)

#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int a[n];

    for(int i=0;i<n;i++) cin >> a[i];

    //longest subarray length with sum <= k
    int l = 0,r = n-1;
    int left_sum = 0,right_sum = 0;

    for(int i=0;i<k;i++) left_sum += a[i];    // O(K)
    int sum = left_sum;

    while(k > 0){                      // O(K)
        left_sum -= a[--k];
        right_sum += a[r--];

        if(left_sum + right_sum > sum) sum = left_sum + right_sum;
    }
    cout << sum;
}

// 6 2
// 1 5 3 9 2 0

// O/P : 6
