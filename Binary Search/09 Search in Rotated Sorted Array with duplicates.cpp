// TC : O(log n)
// SC : O(1)

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target) return true;


            //edge case in rotated array with duplicate elements
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;                                                 // repeat trimming until we can find the sorted array
            }


            // if left part is sorted
            if(nums[low] <= nums[mid]){                             
                if(target >= nums[low] && target <= nums[mid]){
                    high = mid - 1;                                // if element exits in this range
                }
                else low = mid+1;                                  // if element not exists
            }

            // if right part is sorted
            else{
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else high = mid - 1;
            }
        }
        return false;
    }
};
