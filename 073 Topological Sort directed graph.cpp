// TC  : O(N + E)    actually O(N + E) + O(N)
//SC   : O(N)        3N => stack, vector, visited  + recursion stack(additional)
#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
        void dfs(int i,vector<vector<int>> &adj, vector<int> &visited, stack<int> &s){
            visited[i] = 1;
            for(auto k: adj[i]){
                if(!visited[k]){
                    dfs(k,adj,visited,s);
                }
            }
            s.push(i);
        }
        vector<int> topologicalSort(vector<vector<int>> adj) {
        stack<int> s;
        vector<int>v;
        vector<int> visited(adj.size(),0);
        for(int i=0;i<adj.size();i++){
            if(!visited[i]) dfs(i,adj,visited,s);    // O(N + E)  directed so E not 2E
        }
        while(!s.empty()){
            v.push_back(s.top());        // O(N)
            s.pop();
        }
        return v;
    }
};
