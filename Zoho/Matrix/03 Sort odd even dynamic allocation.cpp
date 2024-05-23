#include <iostream>
using namespace std;

void merge(int a[],int low,int mid,int high){
    int temp[high - low + 1];
    int i = low;
    int j = mid+1;
    int k=0;

    while(i <= mid && j <= high){
        if(a[i] < a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }

    while(i <= mid) temp[k++] = a[i++];
    while(j <= high) temp[k++] = a[j++];

    for(int i=low;i<=high;i++) a[i] = temp[i - low];
}

void mergeSort(int a[],int low, int high){
    if(low < high){
        int mid = (low + high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];

    int odd = 0,even = 0;
    for(int i=0;i<n;i++) cin >> a[i];

    for(int i=0;i<n;i++){
        if(a[i]&1) odd++;
        else even++;
    }

    int j=0,k=0;

    int *o = new int[odd];
    int *e = new int[even];
    for(int i=0;i<n;i++){
        if(a[i]&1) o[j++] = a[i];
        else e[k++] = a[i];
    }

    mergeSort(o,0,odd-1);
    mergeSort(e,0,even-1);

    j=0;

    for(int i=0;i<n;i++){
        if(i < odd) a[i] = o[i];
        else a[i] = e[j++];
    }

    for(auto i:a) cout << i << ' ';

    delete[] o;                         // deallocate
    delete[] e;
    return 0;
 }

// Sort the array odd numbers in ascending and even numbers in descending.

// I/p 5 8 11 6 2 1 7

// O/p 1 5 7 11 8 6 2
