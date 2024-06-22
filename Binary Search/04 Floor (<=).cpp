// TC : O(log n)
// SC : O(1)

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){       
        long long low = 0;
        long long high = n-1;
        
        long long ans = -1;
        
        while(low <= high){
            long long mid = low + (high - low)/2;
            
            if(v[mid] <= x){
                ans = mid;
                low = mid + 1;
            }
            else high = mid -1;
        }
        return ans;
    }
};
