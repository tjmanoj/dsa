class Solution{
    public:
    int helper(int arr[], int N, int K,int low, int high){
        
        if(low > high) return -1;

        int mid = low + (high - low)/2;
        
        if(arr[mid] > K) helper(arr,N,K,low,mid-1);
        else if(arr[mid] < K) helper(arr,N,K,mid+1,high);
        else return 1;
    }
    
    int searchInSorted(int arr[], int N, int K) 
    { 
       return helper(arr,N,K,0,N-1);  
    }
};
