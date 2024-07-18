// TC : O(N)
// SC : O(1)

class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        int inc = 1;
        int dec = 1;
        for(int i=1;i<arr.size();i++){
            if(arr[i] > arr[i-1]) inc = dec + 1;
            if(arr[i] < arr[i-1]) dec = inc + 1;
        }
        return max(inc,dec);
    }
};
