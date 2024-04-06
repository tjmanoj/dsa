// TC  : O(N)
// SC  : O(1)

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size() - 1;
        int max = -1;
        while(n >= 0){
            int temp = arr[n];
            arr[n] = max;
            if(temp > max) max = temp;
            n--;
        }
        return arr;
    }
};
