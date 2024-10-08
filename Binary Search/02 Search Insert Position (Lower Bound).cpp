// TC : O(log N)
// SC : O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = n;

        
        int low = 0;
        int high = n - 1;
        while(low <= high){
            int mid = low + (high-low) /2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;                     //We need smallest index so last la irunthu shirnk pandrom
            }
            else low = mid + 1;
        }
        return ans;

    }
};
