#include<iostream>
#include<unordered_map>
using namespace std;
bool isunique(int a[],int n){
    unordered_map<int,int> m;
    unordered_map<int,int>m1;
    for(int i=0;i<n;i++) m[a[i]]++;
    
    for(auto i:m){
        if(m1.find(i.second) != m1.end()) return false;
        m1[i.second] = 1;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        cout << (isunique(a,n) ? "True\n":"False\n");
    }
}
