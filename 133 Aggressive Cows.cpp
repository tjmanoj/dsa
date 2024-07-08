// TC : O(N logn) + O(N * log (arr[n-1] - arr[0]))            // N log n for sorting
// SC : O()

bool func(vector<int> &stalls, int dist, int k){
    int count = 1;
    int prev = stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(stalls[i] - prev >= dist){
            count++;
            prev = stalls[i];
            if(count == k) return 1;
        }
    }
    return 0;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int low = 1;
    int high = stalls[stalls.size() - 1] - stalls[0];
    int ans = 0;
    while(low <= high){                          // O(N * log (arr[n-1] - arr[0]))
        int mid = low + (high - low)/2;

        if(func(stalls,mid,k) == true){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}
