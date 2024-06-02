#include<iostream>
using namespace std;

int countFactors(int n){
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n % i == 0) count++;
    }
    
    return count;
}

void merge(int a[],int low, int mid, int high){
    int temp[high-low+1];
    int i = low;
    int j = mid+1;
    int k=0;
    while(i <= mid && j <= high){
        if(countFactors(a[i]) >= countFactors(a[j])) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }
    
    while(i <= mid) temp[k++] = a[i++];
    while(j <= high) temp[k++] = a[j++];
    
    for(int i=low;i<=high;i++) a[i] = temp[i-low];
}

void mergeSort(int a[], int low, int high){
    if(low < high){
        int mid = (low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

int main(){
    int a[5] = {8,3,16,2,12};
    mergeSort(a,0,4);
    
    for(int i=0;i<5;i++) cout << a[i] << ' ';
}

// To find the factors of the numbers given in an array and to sort the numbers in descending order according to the factors present in it.

// Input:

// Given array : 8, 2, 3, 12, 16

// Output:

// 12, 16, 8, 2, 3

// O/P: 2
