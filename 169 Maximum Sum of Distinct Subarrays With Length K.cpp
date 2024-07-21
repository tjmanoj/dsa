// TC : O(N)
// SC : O(1)

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        long long sum = 0;
        for(int i=0;i<k;i++){
            sum += nums[i];
            m[nums[i]]++;
        }
        
        long long maxSum = 0;
        if(m.size() == k && sum > maxSum){
            maxSum = sum;
        }
      
        int l=0,r=k;

        while(r < nums.size()){
            sum += nums[r];
            m[nums[r]]++;

            sum -= nums[l];
            m[nums[l]]--;
            if(m[nums[l]] == 0) m.erase(nums[l]);

            if(sum > maxSum && m.size() == k) maxSum = sum;
            l++;
            r++;
        }
        return maxSum;
    }
};
