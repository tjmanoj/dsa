// TC : O(N*M)
// SC : O(M*N)

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int shortestDistance(vector<vector<int>>& grid, pair<int, int> start, pair<int, int> end) {
        int rows = grid.size();
        int col = grid[0].size();
        
        vector<vector<int>> distance(rows,vector<int> (col,INT_MAX));
        distance[start.first][start.second] = 0;
        queue<pair<int,pair<int,int>>> p;
        p.push({0,{start.first,start.second}});
        
        while(!p.empty()){
            int i = p.front().second.first;
            int j = p.front().second.second;
            int d = p.front().first;
            p.pop();
        
            // top 
            if(i > 0 && grid[i-1][j] == 1 && distance[i-1][j] > d + 1){
                distance[i-1][j] = d + 1;
                p.push({distance[i-1][j],{i-1,j}});
            }
            
            //bottom
            if(i+1 < rows && grid[i+1][j] == 1 && distance[i+1][j] > d + 1){
                distance[i+1][j] = d + 1;
                p.push({distance[i+1][j],{i+1,j}});
            }
            
            //left
            if(j > 0 && grid[i][j-1] == 1 && distance[i][j-1] > d + 1){
                distance[i][j-1] = d + 1;
                p.push({distance[i][j-1],{i,j-1}});
            }
            
            //right
            if(j+1 < col && grid[i][j+1] == 1 && distance[i][j+1] > d + 1){
                distance[i][j+1] = d + 1;
                p.push({distance[i][j+1],{i,j+1}});
            }
            
            // If the destination is reached return that distance
            if(i == end.first && j == end.second) return d;
        }
        return -1;
    }
};
