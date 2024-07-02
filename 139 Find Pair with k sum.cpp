// TC : O(N)
// SC : O(N)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(k - a[i]) != m.end()){
            cout <<m[k-a[i]] << ' ' << i;
            break;
        }
        m[a[i]] = i;
    }
}
