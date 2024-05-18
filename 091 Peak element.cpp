// TC : O(logn)
//SC  : O(1)

//Using binary search
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int n=a.size();
        
        if(n == 1) return a[0];
        if(a[0] > a[1]) return a[0];
        if(a[n-1] > a[n-2]) return a[n-1];
        
        int low = 1;
        int high = n-2;
        
        while(low <= high){
            int mid = (low + high)/2;
            if(a[mid] > a[mid-1] && a[mid] > a[mid+1]) return a[mid];
            
            if(a[mid] > a[mid-1]) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
        
    }
};

//Using linear search
// TC : O(N)
//SC  : O(1)

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int n=a.size();
        
        if(n == 1) return a[0];
        if(a[0] > a[1]) return a[0];
        if(a[n-1] > a[n-2]) return a[n-1];
        for(int i=1;i<n-1;i++){
            if(a[i] > a[i-1] && a[i] > a[i+1]) return a[i];
        }
        
    }
};
