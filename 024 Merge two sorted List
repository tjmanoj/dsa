#include<bits/stdc++.h>
using namespace std;

// Optimal
TC  : O(m + n)   m is size of a and n is size of b
SC  : O(m + n)
vector<int> get_union(vector<int> a, vector<int> b){
    int i=0,j=0;
    vector<int> result;
    while(i < a.size() && j < b.size()){
        if(a[i] <= b[j]){
            if(result.empty() || result.back() != a[i]) result.push_back(a[i]);
            i++;
        }
        else{
            if(result.empty() || result.back() != b[j]) result.push_back(b[j]);
            j++;
        }
        
    }
    while(j < b.size()){
        if(result.empty() || result.back() != b[j]) result.push_back(b[j]); 
    j++;
    }
    while(i < a.size()){
        if(result.empty() || result.back() != a[i]) result.push_back(a[i]);
    i++;
    }
    
    return result;
    
}

int main() {
    int m,n;
    cin >> m >> n;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    vector<int> ans = get_union(a,b);
    for (auto k:ans) cout << k << " ";
    return 0;
}
