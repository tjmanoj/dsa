//TC  : O(N + 2E)    N for all the push and pop operations and 2E for the traversal of the adjacency list for checking visited or not
//SC  : O(3N)        queue, ans, visited

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> bfs(int n, vector<vector<int>> &adj){
        queue<int> q;
        vector<int> visited(n,0);
        vector<int> ans;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto k: adj[curr]){
                if(!visited[k]){
                    q.push(k);
                    visited[k] = 1;
                }
            }
            ans.push_back(curr);
        }
        return ans;
        
        
    }
};
