// TC  : O(N + 2E)
// SC  : O(N)

#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool bfs(int i, vector<vector<int>> &adj, vector<int> &visited){
        visited[i] = 0;         // 0=> green color, 1 => blue color
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto k: adj[cur]){
                if(visited[k] == -1){
                    q.push(k);
                    visited[k] = visited[cur] == 1? 0: 1;        //or we can use     visited[k] = 1 - visited[cur]
                 }
                else{   // already visited means check if same color of cur and adj if so return false
                    if(visited[k] == visited[cur]) return false;
                }
            }
        }
        return true;
    }
    bool bipartite(vector<vector<int>>& adj) {
        
        vector<int> visited(adj.size(),-1);
        for(int i=0;i<adj.size();i++){                                  //O(n)
            if(visited[i] == -1) if(!bfs(i,adj,visited)) return false;    //O(n + 2E)       ethachi oru component non bipartite nalum return false
        }
        return true;
    }
};
