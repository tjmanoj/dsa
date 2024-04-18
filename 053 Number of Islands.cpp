//TC  : O(2 * mn)  where m is rows and n is columns
//SC  : O(2 * mn)  visited=>mn  and stack space=> mn

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void dfs(int i, int j, vector<vector<int>> &visited, vector<vector<int>> grid, int rows, int column){
        visited[i][j] = 1;
        
        // right
        if(j+1 < column && grid[i][j+1] == 1 && visited[i][j+1] ==0 ) dfs(i,j+1,visited,grid,rows,column);

        // bottom
        if(i+1 < rows && grid[i+1][j] == 1 && visited[i+1][j] ==0 ) dfs(i+1,j,visited,grid,rows,column);

        //left
        if(j > 0 && grid[i][j-1] == 1 && visited[i][j-1] ==0 ) dfs(i,j-1,visited,grid,rows,column);

        //top
        if(i > 0 && grid[i-1][j] == 1 && visited[i-1][j] == 0) dfs(i-1,j,visited,grid,rows,column);
    }
    
    int numOfIslands(vector<vector<int>>& grid){
        int count = 0;
        int rows=grid.size();
        int column = grid[0].size();
        vector<vector<int>> visited(rows,vector<int>(column,0));
        for(int i=0;i<rows;i++){
            for(int j=0;j<column;j++){                                // O(mn)
                if(grid[i][j] == 1 && visited[i][j] ==0){
                    count++;
                    dfs(i,j,visited,grid,rows,column);                // O(mn)  because in the dfs function we call the dfs for all the elements i.e m*n
                } 
            }
        }
        return count;
    }
};
