// TC  : O(N + E)
// SC  : O(N + E)

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void bfs(int i, vector<int> &visited, vector<vector<int>> &adj,vector<int> &distance){        // O(N + 2E)
        visited[i] = 1;
        queue<int> q;
        q.push(i);
        
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto k: adj[cur]){
                if(!visited[k]){
                    visited[k] = 1;
                    distance[k] = distance[cur] + 1;
                    q.push(k);
                }
            }
        }   
    }
    vector<int> shortestPath(int n, int e, vector<vector<int>>& edges, int start) {

        vector<vector<int>> adj(n);           // O(2E)
        for(auto i: edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        vector<int> distance(n,-1);     // O(N)
        vector<int> visited(n,0);      // O(N)
        distance[start] = 0;           // O(N)
        
        bfs(start,visited,adj,distance);
        
        return distance;
    }
};
