
// TC : O(n log n)
// SC : O(1)

class Solution{
	public:
	long long power(int mid, int n,int m){
	    long long ans = 1;
	    for(int i=0;i<n;i++){
	        ans *= mid;
	        if(ans > m) return 2;             // if the value crosses the m atonce return 2 (which indicates move the search space to left)
	    }
	    if(ans == m) return 1;                // represents founded
	    return 0;
	}
	
	int NthRoot(int n, int m)
	{
	    int low = 0,high = m;
	    
	    while(low <= high){
	        long long mid = low + (high - low) /2;
	        
	        if(power(mid,n,m) == 1) return mid;
	        else if(power(mid,n,m) == 2) high = mid - 1;                        // 2 means the elements exeeded so move to left
	        else low = mid + 1;
	    }
	    return -1;
	}  
};
