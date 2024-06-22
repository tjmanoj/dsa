// TC : O(2 * log N)
// SC : O(1)

class Solution {
public:
    int first(vector<int> &a,int n, int x){
            int low = 0;
            int high = n-1;
            int ans = -1;
            
            while(low <= high){
                int mid = low + (high-low)/2;
                if(a[mid] == x){
                    ans = mid;
                    high = mid-1;                       // i need first element so as left as possible
                }
                else if(a[mid] > x) high = mid-1;
                else low = mid+1;
            }
            return ans;
    }

    int last(vector<int> &a,int n, int x){
            int low = 0;
            int high = n-1;
            int ans = -1;
            
            while(low <= high){
                int mid = low + (high-low)/2;
                if(a[mid] == x){
                    ans = mid;
                    low = mid+1;                      // i need last element so as right as possible
                }
                else if(a[mid] > x) high = mid-1;
                else low = mid+1;
            }
            return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOccurence = first(nums,nums.size(),target);

        if(firstOccurence == -1) return {-1,-1};

        return {firstOccurence,last(nums,nums.size(),target)};
    }
};
