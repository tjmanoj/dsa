//Fist method using the Map (count of sub array sum with k sum)

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0,sum = 0;
        map<int,int>m;
        int l = 0,r = 0;
        while(r < nums.size()){
            sum += nums[r];

            if(sum == goal) count++;
            if(m.find(sum - goal) != m.end()){
                count += m[sum - goal];
            }

            m[sum]++;
            r++;

        }
        return count;
    }
};


// Optimal Using the count of (sum <=k ) subarray problem

class Solution {
public:
    int helper(vector<int>& nums, int goal){    // sum <= k method counting
        int l=0, r=0,sum = 0,count = 0;
        if(goal < 0) return 0;
        while(r < nums.size()){
            sum += nums[r];

            while(sum > goal) sum -= nums[l++];     // use the while loop for counting problems if longest asked then use  "if"

            if(sum <= goal) count += (r-l+1);
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal) - helper(nums,goal-1);
    }
};
