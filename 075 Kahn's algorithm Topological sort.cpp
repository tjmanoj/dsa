// TC  : O(N + E)
// SC  : O(3N)

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> topologicalSort(vector<vector<int>> &adj) {
    int n = adj.size();
    vector<int> indegree(n,0);
    queue<int> q;
    vector<int> ans;
    
    // Find indegree
    for(int i=0;i<n;i++){                           // O(E)
        for(auto k: adj[i]) indegree[k]++;
    }
    
    for(int i=0;i<n;i++){                          // O(N)
        if(indegree[i] == 0) q.push(i);
    }
    
    while(!q.empty()){                          // O(N + E)
        int cur = q.front();
        ans.push_back(cur);
        q.pop();
        for(auto k: adj[cur]){                  // reduce indegree by 1
            indegree[k]--;
            if(indegree[k] == 0) q.push(k);
        }
        }
        return ans;
    }
};
