// TC  : O(2N)
// SC  : O(K)

class Solution {
public:
    int helper(vector<int>& nums, int k){
        map<int,int> m;

        int l=0,r=0,count=0;
        while(r < nums.size()){
            m[nums[r]]++;

            while(m.size() > k){
                m[nums[l]]--;
                if(m[nums[l]] == 0) m.erase(nums[l]);
                l++;
            }

            if(m.size() <= k) count += (r-l+1);
            r++;
        }
        return count;

    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k) - helper(nums,k-1);    
    }
};
