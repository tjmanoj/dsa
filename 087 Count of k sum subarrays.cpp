//TC  : O(N * logN)
//SC  : O(N)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long sum=0;
        map<long long,int> hash;
        int n = nums.size();

        int count = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];

            if(sum == k){
                 count++;
            }

            if(hash.find(sum-k) != hash.end()){
                count+= hash[sum-k];
            }

            hash[sum]++;                              // not maximum subarray. ipo max subarray na 1st vaati varra sum matum than store panuvom.
        }

        return count;

    }
};
