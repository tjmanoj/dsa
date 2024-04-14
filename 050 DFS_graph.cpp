//TC  : O(N + 2E)    pushing n elements inside traversal func, 2E-> for loop run for 2E times each node 2 times
//SC  : O(3N)

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void traversal(int curr,vector<vector<int>> adj,vector<int> &visited,vector<int> &ans){
        ans.push_back(curr);
        visited[curr] = 1;
        for(auto k: adj[curr]){
            if(!visited[k]) traversal(k,adj,visited,ans);
        }
    }
    vector<int> dfs(int n, vector<vector<int>> adj){
        vector<int> ans;
        vector<int> visited(n,0);
        traversal(0,adj,visited,ans);
        return ans;
    }
};
