?//TC  :O(nm)
// SC  :O(mn)

#include <bits/stdc++.h>
using namespace std;

class solution{
public: 
    void dfs(int i, int j, vector<vector<int>> &visited,vector<vector<char>> &grid,int row,int col){
            visited[i][j] = 1;
            //top
            if(i > 0 && !visited[i-1][j] && grid[i-1][j] == 'O') dfs(i-1,j,visited,grid,row,col);
            
            //bottom
            if(i+1 < row && !visited[i+1][j] && grid[i+1][j] == 'O') dfs(i+1,j,visited,grid,row,col);
            
            //left
            if(j > 0 && !visited[i][j-1] && grid[i][j-1] == 'O') dfs(i,j-1,visited,grid,row,col);
            
            //right
            if(j < col && !visited[i][j+1] && grid[i][j+1] == 'O') dfs(i,j+1,visited,grid,row,col);
    }
    
    void surroundO(vector<vector<char>>& grid){
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> visited(row,vector<int>(col,0));
        
        for(int i=0;i<row;i++){                                 // O(2n + 2m)    compared to mn it is very low so ignore
            for(int j=0;j<col;j++){
                if(i==0 || j==0 || i==row-1 || j==col-1){
                    if(grid[i][j] == 'O'){
                        dfs(i,j,visited,grid,row,col);
                    }
                }
            }
        }
        
        for(int i=0;i<row;i++){                                 // O(mn)
            for(int j=0;j<col;j++){
                if(!visited[i][j]) grid[i][j] = 'X';
            }
        }
    }
};
