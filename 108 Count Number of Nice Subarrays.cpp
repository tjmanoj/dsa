// TC  : O(2N)
// SC  : O(1)

class Solution {
public:
    int helper(vector<int>& nums, int k){       //calculation count of atmost k odd nums
        int count = 0,l=0,r=0,oddcount=0;

        while(r < nums.size()){
            if(nums[r]&1) count++;

            while(count > k){                  // count so using while loop
                if(nums[l]&1) count--;
                l++;
            }

            if(count <= k) oddcount += (r-l+1);
            r++;
        }
        return oddcount;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums,k) - helper(nums,k-1);
    }
};
