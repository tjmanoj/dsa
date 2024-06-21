//TC  : O(n)
  SC  : O(1)

#include<bits/stdc++.h>
using namespace std;

int max_consecutive_ones(int a[], int n){
    int cur = 0;
    int max = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 1){
            cur++;
            if(cur > max) max = cur;
        }
        else cur = 0;
    }
    return max;
}
int main() {
  int a[8] = {1,1,3,1,5,1,1,1};
  cout << max_consecutive_ones(a,8);
  return 0;
}


// Two pointer
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int l = 0, r = 0;
    int maxLen = 0;

    while(r < n){
        if(a[r] == 1) maxLen = max(r - l + 1,maxLen);

        else l = r+1;

        r++;

    }
    cout << maxLen;
}
