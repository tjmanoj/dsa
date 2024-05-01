// TC  : O(N + E)
// SC  : O(N)

#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool dfs(int i, vector<int> &visited, vector<int> &path, vector<vector<int>> &adj, vector<int> &res){
        visited[i] = 1;
        path[i] = 1;
        
        for(auto k : adj[i]){
            if(!visited[k]){
                if(dfs(k,visited,path,adj,res)) return true;
            }
            else{
                if(path[k]) return true;
            }
        }
        path[i] = 0;
        res.push_back(i);
        return false;
    }
    vector<int> safeNodes(vector<vector<int>>& adj) {
        vector<int> res;
        vector<int> visited(adj.size(),0);
        vector<int> path(adj.size(),0);
        for(int i=0;i<adj.size();i++){
            if(!visited[i]){
                dfs(i,visited,path,adj,res);      // if the node is not connected to a cycle then it is safe
            }
        }
        sort(res.begin(),res.end());
        return res;
        
    }
};
