// TC : O(N * M)
// SC : O(1)

bool isToeplitz(vector<vector<int>>& mat) {
    int row = mat.size();
    int col = mat[0].size();
 
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(mat[i][j] != mat[i-1][j-1]) return false;
        }
    }
    return true;
}
