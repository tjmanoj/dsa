// TC : O(E log V) + O(N)
// SC : O(N)

#include <bits/stdc++.h>
using namespace std;
// priority_queue < distance, <adj,parent>>
class solution{
public:
    vector<int> shortestPath(vector<pair<int, int>> adj[], int n) {
        vector<int> distance(n,INT_MAX);
        vector<int> parent(n,-1);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        
        int start = 0,end = n-1;
        distance[0] = 0;
        parent[0] = 0;
        
        p.push({0,start});
        while(!p.empty()){
            int cur = p.top().second;
            int d =  p.top().first;
            p.pop();
            for(auto k: adj[cur]){
                int neighbour = k.first;
                int weight = k.second;
                
                if(d + weight < distance[neighbour]){
                     distance[neighbour] = d + weight;
                     parent[neighbour] = cur;
                     p.push({distance[neighbour],neighbour});
                }
            }
        }
        if(distance[n-1] == INT_MAX) return {-1};
        vector<int> ans;
        int temp = n-1;
        while(temp != start){
            ans.push_back(temp);
            temp = parent[temp];
        }
        ans.push_back(start);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
