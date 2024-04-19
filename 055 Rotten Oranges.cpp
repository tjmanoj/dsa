//TC  : O(3MN)
//SC  : O(2MN)

#include <bits/stdc++.h>
using namespace std;

class solution{
public :
    int rottenOranges(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int ans = 0;
        vector<vector<int>> visited(row,vector<int>(col,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<row;i++){              // O(mn)
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 2){
                    q.push({{i,j},0});
                    visited[i][j] = 1;
                }
            }
        }
        while(!q.empty()){                      // O(mn)  , worst case all fruits are fresh expect 1
            int i = q.front().first.first;
            int j = q.front().first.second;
            int t = q.front().second;
            q.pop();
            ans = max(ans,t);
            // top
            if(i>0 && matrix[i-1][j] == 1 && !visited[i-1][j]){
                q.push({{i-1,j},t+1});
                visited[i-1][j] = 1;
            }
            
            //bottom
            if(i+1 < row && matrix[i+1][j] == 1 && !visited[i+1][j]){
                q.push({{i+1,j},t+1});
                visited[i+1][j] = 1;
            }
            
            //left 
            if(j > 0 && matrix[i][j-1] == 1 && !visited[i][j-1]){
                q.push({{i,j-1},t+1});
                visited[i][j-1] = 1;
            }
            
            // right
            if(j+1 < col && matrix[i][j+1] == 1 && !visited[i][j+1]){
                q.push({{i,j+1},t+1});
                visited[i][j+1] = 1;
            }
        }
        for(int i=0;i<row;i++){                                              // O(mn)
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 1 && !visited[i][j]) return -1;
            }
        }
        return ans;
        
        
    }
};
