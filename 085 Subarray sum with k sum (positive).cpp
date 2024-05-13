// TC  : O(N)
// SC  : O(1)

#include<bits/stdc++.h>
using namespace std;

int window(int a[], int n, int k){
    int i=0,j=0,sum=a[0];
    int max = 0;

    while(j < n){
        
        if(sum == k){
            int l = j - i + 1;
            if(l > max) max = l;
        }

        if(sum > k){
            sum -= a[i++];
        }

        else{
            sum += a[++j];
        }
    }
    return max;
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cout << window(a,n,k);
    // cout << longsubarray(a,n,k);
}
