// Method 1 Using Hashing
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto i: nums) m[i]++;

        int count = 0;
        
        for(auto i: m){
            if(!k && i.second > 1 || k && m.find(i.first+k) != m.end()) count++;
        }
        return count;
    }
};


// Method 2 Using Two pointers and Set
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>> s;
        int l=0,r=1;
        sort(nums.begin(),nums.end());

        while(r < nums.size()){
            if(abs(nums[l] - nums[r]) == k) s.insert({nums[l++],nums[r++]});
            else if(abs(nums[l] - nums[r]) < k) r++;
            else l++;
            if(l == r) r++;
        }
        return s.size();
    }
};
