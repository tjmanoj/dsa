// TC : O(N) + O(log(max) * N)                log(max) is running n times
// SC : O(1)

class Solution {
public:
    int func(vector<int> &nums,int divisor){              // O(N)
        int sum = 0;
        for(int i=0;i<nums.size();i++) sum += ceil((double)nums[i]/ (double(divisor)));
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {        
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());          // O(N)
        int ans;
        while(low <= high){
            int mid = low + (high - low)/2;

            if(func(nums,mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
