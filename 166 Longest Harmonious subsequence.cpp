// TC : O(N Log N)
// SC : O(1)
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxLen = 0;
        sort(nums.begin(),nums.end());
        for(auto i: nums) cout << i << ' ';
        int l = 0,r = 0;
        while(r < nums.size()){
            int diff = nums[r] - nums[l];

            if(diff == 1) maxLen = max(maxLen,r-l+1);
            else if(diff > 1){
                if(nums[r] - nums[l] > 1){
                     l++;
                     continue;
                }
            }
            r++;
        }
        return maxLen;
    }
};



//Using hashing
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxLen = 0;
        for(auto i: nums) m[i]++;

        for(auto i: m){
            if(m.find(i.first - 1) != m.end()){
                maxLen = max(maxLen,i.second + m[i.first - 1]);
            }
        }
        return maxLen;
    }
};
