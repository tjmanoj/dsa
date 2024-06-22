class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = INT_MAX;

        int low = 0;
        int high = nums.size()-1;

        while(low <= high){
            int mid = low + (high - low)/2;
            
            //if left part is sorted
            if(nums[low] <= nums[mid]){
                if(nums[low] < min) min = nums[low];
                low = mid+1;
            }

            // right part is sorted
            else{
                if(nums[mid] < min) min = nums[mid];
                high = mid-1;
            }

        }
        return min;
    }
};
