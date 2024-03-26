

#include<bits/stdc++.h>
using namespace std;

// Bruteforce
TC  : O(N + K) where k is the rotate times
SC  : O(k)

void rotate(int arr[], int n, int k){
    int temp[k];
    for(int i = 0; i < k; i++) temp[i] = arr[i];
  
    for(int i = k; i< n; i++) arr[i-k] = arr[i];
   
    for(int i = n-k; i < n; i++) arr[i] = temp[i-(n-k)];
    
}


// Optimal
TC  : O(2N)    => O (K + (N-K) + N)  => 2N
SC  : O(1)

void left_rotate_by_k_places(int a[], int n, int k){
    reverse(a,a+k);
    reverse(a+k,a+n);
    reverse(a,a+n);
}

int main() {
    int n, k;
    cin >> n >> k;
    k = k%n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    left_rotate_by_k_places(arr, n, k);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}



