// Memeozation

// TC : O(N)
// SC : O(N) + O(N)

#include <bits/stdc++.h> 
#define MOD 1000000007;
int func(int n,vector<int> &dp){
    if(n <= 1) return 1;

    if(dp[n] != -1) return dp[n];

    return dp[n] = (func(n-1,dp) + func(n-2,dp)) % MOD;
}
int countDistinctWays(int nStairs) {
    vector<int> dp(nStairs+1,-1);
    return func(nStairs,dp);

}
