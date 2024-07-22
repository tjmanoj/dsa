// TC : O(N * M)
// SC : O(M * N)

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> ans(col,vector<int>(row));

        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++) ans[i][j] = matrix[j][i];           // since it is not a square matrix we start from j = 0
        }
        return ans;
    }
};
