// TC  : O(3N + 3E)
// SC
//stack space        : O(N)
//Additional space   : O(N + E)

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void dfs(int cur,vector<vector<pair<int,int>>> &adj,vector<int> &visited,stack<int> &s){
        visited[cur] = 1;
        for(auto k: adj[cur]){
            int neighbour = k.first;
            int weight = k.second;
            if(!visited[neighbour]) dfs(neighbour,adj,visited,s);
        }
        s.push(cur);
    }
    vector<int> shortestPath(int n, int e, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> adj(n);                                              // SC : O(E) only the edges list will be stored
        
        for(auto i:edges){              // finding the adj list with weight     O(E)
            int a = i[0];
            int b = i[1];
            int weight = i[2];
            adj[a].push_back({b,weight});
        }

       
        // calculate the toposort for the graph that node 0 can reach

      
        stack<int> s;                                      
        vector<int> visited(n);     
        dfs(0,adj,visited,s);              // O(N + E)  directed graph        SC  : O(N)  recursion stack space
        
        vector<int> distance(n,INT_MAX);                                    //O(N)
        distance[0] = 0;
        while(!s.empty()){                                                  //O(N + E)    N times => top,pop and E times for loop for adj
            int cur = s.top();
            s.pop();
            for(auto k: adj[cur]){
                int neighbour = k.first;
                int weight = k.second;
                if(distance[cur] + weight < distance[neighbour]) distance[neighbour] = distance[cur] + weight;
            }
        }
        
        for(int i=0;i<n;i++){                                       // O(N)
            if(distance[i] == INT_MAX) distance[i] = -1;
        }
        
        return distance;
    }
};
