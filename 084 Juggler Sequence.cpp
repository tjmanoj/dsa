// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)

class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        vector<long long> ans{n};
        while(ans.back() != 1){
            if(ans.back() & 1) ans.push_back((long long)(pow(ans.back(),1.5)));
            else ans.push_back((long long)pow(ans.back(),0.5));
        }
        return ans;
    }
};
