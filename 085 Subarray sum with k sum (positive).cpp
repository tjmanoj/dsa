// TC  : O(N)
// SC  : O(1)

#include<bits/stdc++.h>
using namespace std;


// int longsubarray(int a[], int n, int k){
//     int sum = 0;
//     int max = 0;
//     map<int, int> m;
//     for(int i=0;i<n;i++){
//         sum += a[i];
//         if(sum == k) max = i+1;
//         if(m.find(sum - k) != m.end()){
//             int len = i - m[sum - k];
//             if(max < len) max = len;
//         }
//         if(m.find(sum) == m.end()) m[sum] = i;
//     }
//     return max;
// }
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
