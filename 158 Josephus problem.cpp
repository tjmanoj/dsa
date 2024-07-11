// TC : O(N)
// SC : O(N)   stack space
class Solution
{
    public:
    int josephus(int n, int k)
    {
        if(n == 1) return 1;                   //actual ah 0 than return panannum, since in qsn it is 1 based index
        return (josephus(n-1,k)+k-1) % n + 1;  // actual ah func(n-1,k)+k  % n  than answer (0 biased ku)
    }
};
