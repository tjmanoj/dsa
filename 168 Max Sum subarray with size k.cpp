// TC : O(N)
// SC : O(1)

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long long sum = 0;
        
        for(int i=0;i<K;i++){
            sum += Arr[i];
        }
        
        long long maxSum = sum;
        int l=0,r=K;
        while(r < N){
            sum -= Arr[l++];
            sum += Arr[r++];
            
            if(sum > maxSum) maxSum = sum;
        }
        return maxSum;
    }
};
