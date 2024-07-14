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




// Tabulation
// TC  : O(N)
// SC  : O(N)

class Solution {
public:
    int fibo(int n){
        if(n <= 1) return n;
        vector<int> dp(n+1,-1);
        dp[0] = 0,dp[1] = 1;

        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }

    int fib(int n) {
        return fibo(n);
    }
};




// Space Optimized
// TC  : O(N)
// SC  : O(1)

class Solution {
public:
    int fibo(int n){
        if(n <= 1) return n;
        int prev2 = 0,prev = 1;

        for(int i=2;i<=n;i++){
            int cur = prev + prev2;
            prev2 = prev;
            prev = cur;
        }

        return prev;
    }

    int fib(int n) {
        return fibo(n);
    }
};
