// TC  : O(N)
// SC  : O(N)

class Solution
{
    public:
    long long mod = 1000000007;             // 10^9 + 7

    int padavon(int n){
        int dp[n+2];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 1;
        for(int i=3;i<=n;i++) dp[i] = dp[i-2]%mod + dp[i-3]%mod;
        return dp[n]%mod;
    }
    int padovanSequence(int n)
    {
       return padavon(n);
    }
    
};
