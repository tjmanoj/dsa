// TC : O(log n)
// SC : O(1)

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        int ans = 1;
        long long low = 1,high = x/2;
        
        while(low <= high){
            long long mid = low + (high - low)/2;
            
            if(mid * mid <= x){
                ans = mid;
                low = mid+1;
            }
            else high = mid - 1;
        }
        return ans;
    }
};
