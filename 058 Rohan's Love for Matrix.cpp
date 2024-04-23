class Solution {
  public:
    #define MOD 1000000007;
    int firstElement(int n) {
        long long a=0,b=1,c;
        if(n < 2) return n;
        for(int i=2;i<=n;i++){
            c = (a+b) % MOD;
            a = b;
            b = c;
        }
        return b;
    }
};
