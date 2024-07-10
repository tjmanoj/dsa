#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int ans = -1;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
         cin >> a[i];
         m[a[i]]++;
    }
    
    for(int i=0;i<n;i++){
        if(m[a[i]] == 1 && a[i] > ans) ans = a[i];
    }
    cout << ans;
    
}
