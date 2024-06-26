// TC : O(log(sum(arr) - max(arr) + 1 ))
// SC : O(1)

class Solution {
public:
    int func(vector<int> &weights, int capacity){        // O(N)
        int days = 1;
        int sum = 0;
        for(int i=0;i<weights.size();i++){
            if(sum + weights[i] <= capacity){
                sum += weights[i];
            }
            else{
                days++;
                sum = weights[i];
            } 
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {    
        int low = 0;
        int high = 0;
        int ans = 0;
        for(int i=0;i<weights.size();i++){               // O(N)
            high += weights[i];
            if(low < weights[i]) low = weights[i];
        }

        while(low <= high){                      // O(log(sum(arr) - max(arr) + 1 ))
            int mid = low + (high - low)/2;

            if(func(weights,mid) <= days){
                ans = mid;
                high = mid - 1;
            }
            else low = mid+1;
        }
        return ans;
    }
};
