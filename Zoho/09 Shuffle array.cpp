#include <iostream>
using namespace std;

void shuffleArray(int arr[],int n){
    int lastIndex = n - 1;
    while(lastIndex > 0){
        srand(time(nullptr));
        int index = rand() % lastIndex;
        int temp = arr[lastIndex];
        arr[lastIndex] = arr[index];
        arr[index] = temp;
        lastIndex -= 1;
    }
    
    
    for(int i=0;i<n;i++){
        cout << arr[i] << ' ';
    }
}

int main(){
    int n,start,end;
    cin >> n;
    
    while(n--){
        cin >> start;
        cin >> end;
        int arr[end];
        int j=0;
        for(int i=start;i<=end;i++){
            arr[j++] = i;
        }
        
        shuffleArray(arr,end-start+1);
    }
}

// Given a range of numbers print the numbers such that they are shuffled

// First line contains no. of test cases.

// I/P:

// 3

// 1 10

// 5 12

// 1 10



// O/P: (The order of numbers may vary)

// 2 3 9 5 1 10 6 7 8 4

// 5 6 9 12 10 11 7 8

// 9 5 1 2 3 4 8 7 6 10



// If any of the given ranges are same, The orders of the numbers must vary.

// I/P: 4

// 1 7

// 1 7

// 1 7

// 1 7

// O/P:

// 6 7 1 5 2 3 4

// 1 7 2 6 3 5 4

// 6 3 5 1 4 2 7

// 1 2 3 6 5 7 4
