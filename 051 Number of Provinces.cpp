//TC  : O(N)  +  O(N + 2E)
//      O(N + E)
// SC    : O(2N)  since we not used the stack to store the result 3N - N

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void bfs(int i, vector<vector<int>> &adj, vector<int> &visited){
        queue<int> q;
        q.push(i);
        visited[i] = 1;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            for(auto k: adj[temp]){
                if(!visited[k]){
                    q.push(k);
                    visited[k] = 1;
                }
            }
        }
    }
    
    int numberOfProvinces(int n, vector<vector<int>> adj) {
        vector<int> visited(n,0);
        int count = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){            // O(N)
                bfs(i,adj,visited);      // O(N + 2E)  each province will take one bjs time complexity
                count++;
            }
        }
        return count;    
    }
};
