// TC : O(3^(N^2))    we can go only in any of the 3 direction to reach destination, we cannot go all the 4 directions.
// SC : O(L * N)      where L = length of path, N = number of paths. 
class Solution{
    public:
    void helper(vector<string>& res,vector<vector<int>>grid,string cur,vector<vector<int>>& visited,int i,int j,int n){
        if(!grid[i][j]) return;
        
        visited[i][j] = 1;
        
        if(i == n-1 && j== n-1){
            res.push_back(cur);
        }
        //top
        if(i>0 && grid[i-1][j] == 1 && !visited[i-1][j]){
            helper(res,grid,cur+"U",visited,i-1,j,n);
        }
        
        //left
        if(j>0 && grid[i][j-1] == 1 && !visited[i][j-1]){
            helper(res,grid,cur+"L",visited,i,j-1,n);
        }
        
        //right
        if(j+1 < n && grid[i][j+1] == 1 && !visited[i][j+1]){
            helper(res,grid,cur+"R",visited,i,j+1,n);
        }
        
        //bottom
        if(i+1 < n && grid[i+1][j] == 1 && !visited[i+1][j]){
            helper(res,grid,cur+"D",visited,i+1,j,n);
        }
        
        visited[i][j] = 0;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<int>> visited(n,vector<int>(n,0));
        vector<string> res;
        helper(res,m,"",visited,0,0,n);
        return res;
    }
};
