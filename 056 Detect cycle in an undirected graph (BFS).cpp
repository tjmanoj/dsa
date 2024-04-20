//TC  : O(2n + 2e)  => O(n+e)
//SC  : O(2n)  visited and queue

#include <bits/stdc++.h>
using namespace std;

class solution{
public :
    bool bfs(int i,vector<vector<int>> &adj, vector<int> &visited){
        queue<pair<int,int>> q;
        visited[i] = 1;
        q.push({i,-1});     // initially no parent so -1
        while(!q.empty()){
            int cur = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto k: adj[cur]){
                if(k != parent){
                if(visited[k]) return true;     //if already visited then cycle
                q.push({k,cur});
                visited[k] = 1;
            }
            }
        }
        return false;
        
    }
    bool checkCycle(int n,vector<vector<int>>& adj) {
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){                                   //O(n)
            if(!visited[i]){
                if(bfs(i,adj,visited)) return true;             //O(n + 2e) for each bjs
            }                                            
                                                                //bjs function will return true if cycle exits, if bjs true then return true
        }
        return false;
        
    }
};
