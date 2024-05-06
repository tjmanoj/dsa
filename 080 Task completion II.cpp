// TC  : O(N + P)  where n is no.of nodes and p is no.of prerequisites
// SC  : O(N + P)

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void toposort(vector<vector<int>> &adj,int n,vector<int> &ans){
        vector<int> indegree(n,0);
        queue<int> q;
        for(int i=0;i<n;i++){
            for(auto k: adj[i]){
                indegree[k]++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(indegree[i] == 0) q.push(i);
        }
        
        while(!q.empty()){
            int cur = q.front();
            ans.push_back(cur);
            q.pop();
            for(auto k: adj[cur]){
                indegree[k]--;
                if(indegree[k] == 0) q.push(k);
            }
        }
        
    }
    vector<int> taskCompletion2(int n, int P, vector<pair<int,int>> &prerequisites){
        vector<vector<int>> adj(n);
        vector<int> ans;
        for(auto i: prerequisites){
            adj[i.second].push_back(i.first);
        }
      toposort(adj,n,ans);
      if(ans.size() == n) return ans;
      return {};
    }
};
