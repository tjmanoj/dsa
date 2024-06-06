// TC  : O(N * log N)
// SC  : O(N)

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        long long sum=0;
        map<long long,int> hash;
        int max = 0;
        int r = 0;
        while(r < N){
            sum += A[r];

            if(sum == K) max = r+1;

            if(hash.find(sum-K) != hash.end()){
                int len = r - hash[sum-K];
                if(len > max) max = len;
            }

            if(hash.find(sum) == hash.end()){
                hash[sum] = r;
            }
            r++;
        }

        return max;
    } 

};
