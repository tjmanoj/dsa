// TC  : O(N + E ) 
// SC  : O(N)

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool dfs(int cur, vector<int> &visited, vector<int> &path, vector<int>* &adj){
        visited[cur] = 1;
        path[cur] = 1;
        for(auto k: adj[cur]){
            if(visited[k] && path[k]) return true;
            else{
                if(dfs(k,visited,path,adj)) return true;
            }
        }
        path[cur] = 0;
        return false;
    }
    bool cycle(vector<int>* adj, int n) {
        vector<int> visited(n,0);
        vector<int> path(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(dfs(i,visited,path,adj)) return true;
            }
        }
        return false;
    }
};
