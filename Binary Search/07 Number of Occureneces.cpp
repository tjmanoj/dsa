// TC : O(2* log n)
// SC : O(1)

class Solution{
public:	
    int first(int a[],int n, int x){
            int low = 0;
            int high = n-1;
            int ans = -1;
            
            while(low <= high){
                int mid = low + (high-low)/2;
                if(a[mid] == x){
                    ans = mid;
                    high = mid-1;           // i need first element so as left as possible
                }
                else if(a[mid] > x) high = mid-1;
                else low = mid+1;
            }
            return ans;
    }

    int last(int a[],int n, int x){
            int low = 0;
            int high = n-1;
            int ans = -1;
            
            while(low <= high){
                int mid = low + (high-low)/2;
                if(a[mid] == x){
                    ans = mid;
                    low = mid+1;               // i need last element so as right as possible
                }
                else if(a[mid] > x) high = mid-1;
                else low = mid+1;
            }
            return ans;
    }
	int count(int arr[], int n, int x) {
	    int firstOccurence = first(arr,n,x);
	    
	    if(firstOccurence == -1) return 0;
	    
	    return last(arr,n,x) - firstOccurence + 1;
	}
};
