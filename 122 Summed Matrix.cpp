class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        if(q < 2 || q > n*2) return 0;
        return n - abs(n+1 - q);
    }
};
