// TC  : O(n + E)
// SC  : O(N + P)        // n for topo sort ans vector and P for adj list

#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
        bool cycle(vector<vector<int>> &adj, int n){
        vector<int> ans;
        vector<int> indegree(n,0);
        queue<int> q;
        
        for(int i=0;i<n;i++){
            for(auto k: adj[i]) indegree[k]++;
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
        
        if(ans.size() == n) return true;
        return false;
    }

    bool taskCompletion(int n, int P, vector<pair<int,int>> &prerequisites){
      vector<vector<int>> adj(n);
      for(auto i: prerequisites){            // O(P) for creating the adj
          adj[i.second].push_back(i.first);  // O(N + P) for kahn's algo        here P = E edges
      }
      return cycle(adj,n);
    }
};
