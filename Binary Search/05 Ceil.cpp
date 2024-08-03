int floor(int a[],int n, int x){
        int low = 0;
        int high = n-1;
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high-low)/2;
            if(a[mid] <= x){
                ans = a[mid];
                low = mid+1;
            }
            else high = mid - 1;
        }
        return ans;
}

int ceil(int a[],int n, int x){
        int low = 0;
        int high = n-1;
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high-low)/2;
            if(a[mid] >= x){
                ans = a[mid];
                high = mid-1;                        // the ceil value is as left as possible so shrink from right
            }
            else low = mid + 1;
        }
        return ans;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr,arr+n);
    return {floor(arr,n,x),ceil(arr,n,x)};   
}
