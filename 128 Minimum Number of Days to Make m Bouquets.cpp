// TC : O(N + log (max(m) - min(m) + 1)                      // which means it is starting from min in the array and high is max of the array
// SC : O()

class Solution {
public:
    int func(vector<int> &bloomDay,int day, int k){  // it will return the no of bouquets can be formned for the day passed as parameter   O(N)
        int count = 0;       // consecutive count
        int bouquet = 0;

        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i] <= day){
                count++;
                if(count == k){
                    bouquet++;
                    count = 0;
                }
            }
            else count = 0;
        }
        return bouquet;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(),bloomDay.end());               // O(N)
        int high = *max_element(bloomDay.begin(),bloomDay.end());              // O(N)
        int ans = -1;

        while(low <= high){                         // N * log M          (M is the size of the array)
            int mid = low + (high - low)/2;

            if(func(bloomDay,mid,k) >= m){          // if we can do more bouquet also no problem it is also a answer.
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
