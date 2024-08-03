int upper_bound(int a[], int n, int x){
    int low = 0;
    int high = n - 1;
    int ans = n;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(a[mid] > x){
            ans = mid;
            high = mid - 1;                        //We need smallest index so last la irunthu shirnk pandrom
        }
        else 
            low = mid + 1;
    }
    return ans;
}
