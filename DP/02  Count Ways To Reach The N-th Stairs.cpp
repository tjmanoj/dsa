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


// Tabulation

// TC : O(N)
// SC : O(N)
int func(int n){
    if(n == 0) return 1;        // only one chance
    if(n == 1) return 1;        // since it is a edge case f(n-2) will be -1

    vector<int> dp(n+1,-1);
    dp[0] = 1,dp[1] = 1;

    for(int i=2;i<=n;i++) dp[i] = (dp[i-1] + dp[i-2]) % MOD;

    return dp[n];
}

// Space Optimized

// TC : O(N)
// SC : O(1)
int func(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    int cur;
    int prev2 = 1, prev = 1;

    for(int i=2;i<=n;i++){
        cur = (prev + prev2) % MOD;
        prev2 = prev;
        prev = cur;
    }
     
    return prev;
}


