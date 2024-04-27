//TC  : O(mn)
//SC  : O(mn)

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void dfs(int i,int j,vector<vector<int>> &grid, vector<vector<int>> &visited, int start,int end, vector<pair<int,int>> &temp,int row,int col){
        visited[i][j] = 1;
        temp.push_back({i-start,j-end});
        //top
        if(i > 0 && grid[i-1][j]==1 && !visited[i-1][j])
            dfs(i-1,j,grid,visited,start,end,temp,row,col);

        //bottom
        if(i+1 < row && grid[i+1][j]==1 && !visited[i+1][j])
            dfs(i+1,j,grid,visited,start,end,temp,row,col);
        
        //left
        if(j > 0 && grid[i][j-1]==1 && !visited[i][j-1])
            dfs(i,j-1,grid,visited,start,end,temp,row,col);
            
        //right
        if(j+1 < col && grid[i][j+1]==1 && !visited[i][j+1])
            dfs(i,j+1,grid,visited,start,end,temp,row,col);
        
    }
    int distinctIslands(vector<vector<int>>& grid){
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> visited(row,vector<int>(col,0));
        set<vector<pair<int,int>>> islands;
        for(int i=0;i<row;i++){                              //O(mn)
            for(int j=0;j<col;j++){
                if(!visited[i][j] && grid[i][j] == 1){
                    vector<pair<int,int>> temp;
                    dfs(i,j,grid,visited,i,j,temp,row,col);    // O(MN)
                    islands.insert(temp);
                }
            }
        }
        return islands.size();
    }
};
