//TC  : O(mn)
//SC  :O(2mn)      one mn for stack space

#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    void dfs(int i,int j, vector<vector<int>> &visited, vector<vector<int>> &grid,int row,int col){
        visited[i][j] = 1;
        
        //top
        if(i > 0 && !visited[i-1][j] && grid[i-1][j] == 1) dfs(i-1,j,visited,grid,row,col);
            
        //bottom
        if(i+1 < row && !visited[i+1][j] && grid[i+1][j] == 1) dfs(i+1,j,visited,grid,row,col);
            
        //left
        if(j > 0 && !visited[i][j-1] && grid[i][j-1] == 1) dfs(i,j-1,visited,grid,row,col);
            
        //right
        if(j < col && !visited[i][j+1] && grid[i][j+1] == 1) dfs(i,j+1,visited,grid,row,col);
    }
    int numberOfEnclaves(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        vector<vector<int>> visited(row,vector<int>(col,0));
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i == 0 || i == row - 1 || j== 0 || j==col-1){
                    if(grid[i][j] == 1) dfs(i,j,visited,grid,row,col);
                }
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(!visited[i][j] && grid[i][j] == 1) count++;
            }
        }
        return count;
        
    }
};
