// TC : O(N*M  * log (MN))            log(MN) is for priority queue top()
// SC : O(M*N)
#include <bits/stdc++.h>
using namespace std;
// pair<int,pair<int,int>>
    //   {effort, {i,j}}
class solution{
    public:
    int minimumEffort(vector<vector<int>>& grid){
      int row = grid.size();
      int col = grid[0].size();
      priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> p;
      vector<vector<int>> effort(row, vector<int>(col,INT_MAX));
      effort[0][0] = 0;
      
     p.push({0,{0,0}});
      
      while(!p.empty()){                            // O(N*M)
          int i = p.top().second.first;
          int j = p.top().second.second;
          int eff = p.top().first;
          p.pop();
          // top
          if(i > 0 && effort[i-1][j] > max(eff, abs(grid[i][j] - grid[i-1][j]))){
              effort[i-1][j] = max(eff, abs(grid[i][j] - grid[i-1][j]));
              p.push({max(eff, abs(grid[i][j] - grid[i-1][j])),{i-1,j}});
          }
          
          // bottom
          if(i+1 < row && effort[i+1][j] > max(eff, abs(grid[i][j] - grid[i+1][j]))){
              effort[i+1][j] = max(eff, abs(grid[i][j] - grid[i+1][j]));
              p.push({max(eff, abs(grid[i][j] - grid[i+1][j])),{i+1,j}});
          }
          
          // left
          if(j > 0 && effort[i][j-1] > max(eff, abs(grid[i][j] - grid[i][j-1]))){
              effort[i][j-1] = max(eff, abs(grid[i][j] - grid[i][j-1]));
              p.push({max(eff, abs(grid[i][j] - grid[i][j-1])),{i,j-1}});
          }
          
          //right
          if(j+1 < col && effort[i][j+1] > max(eff, abs(grid[i][j] - grid[i][j+1]))){
              effort[i][j+1] = max(eff, abs(grid[i][j] - grid[i][j+1]));
              p.push({max(eff, abs(grid[i][j] - grid[i][j+1])),{i,j+1}});
          }
      }
      if(effort[row-1][col-1] == INT_MAX) return -1;
      return effort[row-1][col-1];
    }
};
