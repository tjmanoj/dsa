// TC  : O(N)
// SC  : O(1)

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0,r = 0;
        int maxsum = 0;
        int count = 0;
        while(r < nums.size()){
            if(nums[r] == 0) count++;

            if(count > k){
                if(nums[l] == 0) count--;
                l++;
            }
            int len = r - l + 1;
            maxsum = max(maxsum,len);          
            r++;
        }
        return maxsum;
    }
};
