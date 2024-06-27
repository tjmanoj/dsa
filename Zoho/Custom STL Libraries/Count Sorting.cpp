// TC : O(N)
// SC : O(k)      where k is the difference of max number - min number

#include<iostream>
using namespace std;

int main(){
    int n=18;
    int a[n] = {5,2,5,5,3,1,2,5,1,5,0,5,3,1,5,2,2,2};
       
    int max = a[0];
    int min = a[0];
    
    for(int i = 0;i<n;i++){                     // O(N)
        if(min > a[i]) min = a[i];
        if(max < a[i]) max = a[i];
    }
    
    int range = max - min + 1;
       
    int *temp = new int[max-min+1];
    int *ans = new int[n];
    
    for(auto k: a) temp[k - min]++;          // O(N)
    
    for(int i=1;i<range;i++) temp[i] += temp[i-1];     // O(N)
    
    
    
    for(int i=n-1; i>=0; i--) ans[--temp[a[i] - min]] = a[i];

    delete [] temp;

    for(auto i: a) cout << i << ' ' << ;
}
