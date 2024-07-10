// TC : O(N*M)
// SC : O(N*M)

class Solution {
  public:
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        vector<vector<int>> temp (n+1,vector<int> (m+1,0));
        int ans = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(mat[i-1][j-1] == 1){
                    temp[i][j] = min({temp[i][j-1], temp[i-1][j], temp[i-1][j-1]}) + 1;
                    if(temp[i][j] > ans) ans = temp[i][j];
                }
            }
        }
        return ans;
    }
};
