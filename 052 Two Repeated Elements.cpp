// TC : O(n)
// SC : O(1)

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        vector<int> answer;
        for(int i=0;i<n+2;i++){
            int index= abs(arr[i]);
            
            if(arr[index] > 0) arr[index] = -arr[index];
            else answer.push_back(index);
        }
        return answer;
    }
};
