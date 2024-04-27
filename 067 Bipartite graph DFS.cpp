//TC  : O(MN)
//SC  : O(N)

#include <bits/stdc++.h>
using namespace std;

class solution{
public :
    bool dfs(int i, vector<vector<int>> &adj, vector<int> &visited,int color){
        visited[i] = color;
        
        for(auto k: adj[i]){
            if(visited[k] == -1){
                if(!dfs(k,adj,visited,1-color)) return false;
            }
            else{
                if(visited[k] == visited[i]) return false;
            }
        }
        return true;
    }
    bool bipartite(vector<vector<int>>& adj, int n) {
        vector<int> visited(n,-1);
        for(int i=0;i<n;i++){
            if(visited[i] == -1) if(!dfs(i,adj,visited,0)) return false;
        }
        return true;
        
    }
};
