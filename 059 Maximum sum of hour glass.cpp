// TC  : O(nm)
// SC  : O(1)

class Solution {
  public:
    // bool traversal(int i, int j, vector<vector<int>> &mat){
        
    // }
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        int ans = 0;
        if(n < 3) return -1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i-1 >=0 && i+1 < n && j-1 >=0 && j+1 < m){
                    int sum = mat[i][j] + mat[i-1][j] + mat[i+1][j] + mat[i-1][j-1] + mat[i-1][j+1] + mat[i+1][j+1] + mat[i+1][j-1];
                    ans = max(ans,sum);
                }
            }
        }
        return ans;
    }
};
