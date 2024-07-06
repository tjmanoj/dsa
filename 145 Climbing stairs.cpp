// Brutforce
// TC : O(2^n)            This is because ella steps kum 2 possible ways either 1 jump or 2 jumps apo n steps ku 2^n
// SC : O(N)

class Solution {
public:
    int climbStairs(int n) {
       if(n <= 1) return 1;                                 // Base case
       return climbStairs(n-1) + climbStairs(n-2);          // step(n-1) + step(n-2)
    }
};




Optimized with memoization
// TC : O(N)
// SC : O(N)
class Solution {
public:
    int func(int n,vector<int> &dp){
        if(n <= 1) return 1;

        if(dp[n] != -1) return dp[n];
        dp[n] = func(n-1,dp) + func(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
       vector<int> dp(n+1,-1);
       return func(n,dp);
    }
};
