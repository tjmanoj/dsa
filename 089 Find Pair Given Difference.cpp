
//TC  : O(N * log(N))
//TC  : O(N)

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        map<int,int>hash;
        for(int i=0;i<n;i++){
            if(hash.find(arr[i]) != hash.end()) return 1;
            hash[arr[i] + x]++;
            hash[arr[i] - x]++;
        }
        return -1;
    }
};
