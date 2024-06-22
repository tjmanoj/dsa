class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n-1, ans = INT_MAX;
        while(left<=right){
            int mid =  (left+right)/2;
            if(nums[mid] >= nums[left]){
                ans = min(ans,nums[left]);
                left = mid + 1;
            }
            else{
                ans = min(ans,nums[mid]);
                right = mid - 1;
            }
        }
        return ans;
    }
};
