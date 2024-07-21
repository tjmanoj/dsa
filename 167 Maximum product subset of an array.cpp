// TC : O(N)
// SC : O(1)

class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        long long mod = 1e9 + 7;
        long long ans = 1;
        bool zero = false;
        bool pos = false;
        int neg = 0;
        int maxNeg = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > 0){
                pos = true;
                ans = (ans * arr[i]) % mod;
            }
            
            else if(arr[i] < 0){
                neg++;
                maxNeg = max(maxNeg,arr[i]);
                ans = (ans * arr[i]) % mod;
            }
            else zero = true;
        }
        
        if(!pos && !neg) return 0;                          // [0 0 0 0]
        else if(!pos && zero && neg == 1) return 0;         // [0 0 0 -1]
        else if(ans < 0) ans = (ans/maxNeg)%mod;              // removing the extra negative value 
        
        return ans;
    }
};
