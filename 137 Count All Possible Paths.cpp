// TC : O(mn)
// SC : O(mn)

#include<iostream>
using namespace std;

void dfs(int **grid,int **visited,int row,int col,int i,int j,int x2, int y2,int &count){
    
    if(i == x2 && j == y2){
        count++;
        return;
    }
    
    visited[i][j] = 1;
    //top
    if(i > 0 && grid[i-1][j] == 1 && !visited[i-1][j]){
        dfs(grid,visited,row,col,i-1,j,x2,y2,count);
    }
    
    // bottom
    if(i+1 < row && grid[i+1][j] == 1 && !visited[i+1][j]){
        dfs(grid,visited,row,col,i+1,j,x2,y2,count);
    }
    
    //left
    if(j > 0 && grid[i][j-1] == 1 && !visited[i][j-1]){
        dfs(grid,visited,row,col,i,j-1,x2,y2,count);
    }
    
    //right
    if(j+1 < col && grid[i][j+1] == 1 && !visited[i][j+1]){
        dfs(grid,visited,row,col,i,j+1,x2,y2,count);
    }
    
    visited[i][j] = 0;
}

int main()
{
    int r,c,count = 0;
    cin >> r >> c;
    int x1,y1,x2,y2;
    
    int**grid = new int*[r];
    int** visited = new int*[r];
    
    for(int i=0;i<r;i++){
        grid[i] = new int[c];
        visited[i] = new int[c];
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cin >> grid[i][j];
    }
    
    cin >> x1 >> y1 >> x2 >> y2;
    
    dfs(grid,visited,r,c,x1,y1,x2,y2,count);
    cout << count;
    
    for (int i = 0; i < r; i++) {
        delete[] grid[i];
        delete[] visited[i];
    }
    
    
    delete[] grid;
    delete[] visited;
    return 0;   
}


// 4 4
// 1 0 0 1
// 1 0 1 0
// 1 1 1 0
// 0 1 1 1
// 2 0 
// 3 3

// OUTPUT: 2
