// TC : O(N)
// SC : O(1)

// Brutforce
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int i=0;i<arr.size();i++){
            if(arr[i] <= k) k++;
            else return k;
        }
        return k;
    }
};

// O(log n) Optimal

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;

        while(low <= high){
            int mid = low + (high - low)/2;
            // count of missing number till mid
            int count = arr[mid] - (mid+1);

            if(count < k) low = mid + 1;
            else high = mid - 1;
        }
        return high + k + 1;                       // using formula compute this.
    }
};
