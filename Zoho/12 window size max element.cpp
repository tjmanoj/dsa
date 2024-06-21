#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){

    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++) cin>> a[i];

    vector<int> ans;

    int i=0,j=k;

    for(int l=0;l<n-k+1;l++){   // o(n)
        int max = -1;
        for(int m=l;m<l+k;m++){         //O(k)
            if(a[m] > max) max = a[m];
        }
        ans.push_back(max);
    }

    for(auto i:ans) cout << i << ' ' ;

    return 0;
}



// Array = [3,2,7,6,5,1,2,3,4], K=3
// Output = [7,7,7,6,5,3,4]
