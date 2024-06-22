class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int low = 0;
	    int high = n-1;
	    
	    int min = INT_MAX;
	    int minInd = -1;
	    
	    while(low <= high){
	        int mid = low + (high-low)/2;
	        
	        //if left part is sorted
	        if(arr[low] <= arr[mid]){
	            if(arr[low] < min){
	                min = arr[low];
	                minInd = low;
	            }
	            low = mid+1;
	        }
	        else{
	            if(arr[mid] < min){
	                min = arr[mid];
	                minInd = mid;
	            }
	            high = mid-1;
	        }
	        
	    }
	    return minInd;
	}

};
