// Memoization
// TC  : O(N)
// SC  : O(N) + O(N)            stack space + array space
class Solution {
public:
    int fibo(int n,vector<int> &dp){
        if(n <= 1) return n;

        if(dp[n] != -1) return dp[n];                    // step 2

        return dp[n] = fibo(n-1,dp) + fibo(n-2,dp);      // step 3
    }

    int fib(int n) {
        vector<int> dp(n+1,-1);                         // step 1
        return fibo(n,dp); 
    }
};
