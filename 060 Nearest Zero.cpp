// TC  : O(2MN)
// SC  : O(2MN)

#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    vector<vector<int>> nearestZero(vector<vector<int>>& grid){
    int rows = grid.size();
    int col = grid[0].size();
    vector<vector<int>> visited(rows,vector<int>(col,0));
    vector<vector<int>> ans(rows,vector<int>(col,0));
    queue<pair<pair<int,int>,int>> q;
    for(int i=0;i<rows;i++){            //O(MN)
        for(int j=0;j<col;j++){
            if(grid[i][j] == 0){ 
                q.push({{i,j},0});      // here 0 means 0 is from 0 distance(itself)
                visited[i][j]=1;
            }
    }
    }
    while(!q.empty()){                    // O(MN)
        int i= q.front().first.first;
        int j= q.front().first.second;
        int distance = q.front().second;
        q.pop();
        ans[i][j] = distance;
        
        //top
        if(i > 0 && grid[i-1][j] == 1 && !visited[i-1][j]){
            q.push({{i-1,j},distance+1});
            visited[i-1][j]=1;
        }
        
        //bottom 
        if(i+1 < rows && grid[i+1][j] == 1 && !visited[i+1][j]){
            q.push({{i+1,j},distance+1});
            visited[i+1][j] = 1;
        }
        
        //left
        if(j > 0 && grid[i][j-1] == 1 && !visited[i][j-1]){
            q.push({{i,j-1},distance+1});
            visited[i][j-1] = 1;
        }
        
        //right
        if(j+1 < col && grid[i][j+1] == 1 && !visited[i][j+1]){
            q.push({{i,j+1},distance+1});
            visited[i][j+1] = 1;
        }
    }
    
    return ans;
    }
};
