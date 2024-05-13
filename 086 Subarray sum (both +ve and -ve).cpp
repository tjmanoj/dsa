// TC  : O(N * log N)
// SC  : O(N)

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        long long sum=0;
        map<long long,int> hash;
        int max = 0;
        
        for(int i=0;i<N;i++){
            sum += A[i];

            if(sum == K) max = i+1;

            if(hash.find(sum-K) != hash.end()){
                int len = i - hash[sum-K];
                if(len > max) max = len;
            }

            if(hash.find(sum) == hash.end()){
                hash[sum] = i;
            }
        }

        return max;
    } 

};
