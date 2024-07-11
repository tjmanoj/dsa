// TC : O(N^2)
// SC : O(N^2)
class Solution {
  public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& visited,int i,int j,int islandNum,int row,int col,int& area){
        visited[i][j] = 1;
        area++;
        grid[i][j] = islandNum;
        
        //top
        if(i > 0 && !visited[i-1][j] && grid[i-1][j] == 1){
            dfs(grid,visited,i-1,j,islandNum,row,col,area);
        }
        
        //left
        if(j > 0 && !visited[i][j-1] && grid[i][j-1] == 1){
            dfs(grid,visited,i,j-1,islandNum,row,col,area);
        }
        
        //right
        if(j+1 < col && !visited[i][j+1] && grid[i][j+1] == 1){
            dfs(grid,visited,i,j+1,islandNum,row,col,area);
        }
        
        //bottom
        if(i+1 < row && !visited[i+1][j] && grid[i+1][j] == 1){
            dfs(grid,visited,i+1,j,islandNum,row,col,area);
        }
        
        
    }
    
    
    int MaxConnection(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int ans = 0;
        vector<vector<int>> visited(row,vector<int>(col,0));
        int islandNum = 2;
        unordered_map<int,int> m;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(!visited[i][j] && grid[i][j] == 1){
                    int area = 0;
                    dfs(grid,visited,i,j,islandNum,row,col,area);
                    m[islandNum++] = area;
                    ans = max(area,ans);
                }
            }
        }
        
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == 0){
                    set<int> s;
                    int tot = 0;
                    
                    if(i > 0 ) s.insert(grid[i-1][j]);  // top
                    if(i+1 < row) s.insert(grid[i+1][j]); // bottom
                    if(j > 0) s.insert(grid[i][j-1]); // left
                    if(j+1 < col) s.insert(grid[i][j+1]); // right
                    
                    for(auto i: s) tot += m[i];
                    tot++;          // for in between box
                    
                    ans = max(tot,ans);
                }
            }
        }
        return ans;
        
    }
};
