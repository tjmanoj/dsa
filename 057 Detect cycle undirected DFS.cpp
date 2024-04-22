//TC  : O(N+2E)
//SC  : O(N)


#include <bits/stdc++.h>
using namespace std;

class solution{
public :
    bool dfs(int i,int parent,vector<vector<int>> &adj,vector<int> &visited){
        visited[i] = 1;
        for(auto k: adj[i]){
            if(k != parent){
                if(visited[k]) return true;             // if the current node is already visited then return cycle.
                if(dfs(k,i,adj,visited)) return true;   // if any of my neighbour found cycle then immediately return true
            }
        }
        return false;                                   // when no nodes found a cycle return false
    }

    bool checkCycle(int n, vector<vector<int>>& adj) {
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){                                               //O(n + 2e)     it will call 3 times if 3 disconnected graphs present. 
            if(!visited[i]) if(dfs(i,-1,adj,visited)) return true;                          //Because first node will completely visit the 1st disconnected graph
        }
        return false;
    }
};
