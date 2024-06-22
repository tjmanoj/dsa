// TC  : O(E log N)          for each vertex min heap is used to take min distance.
// SC  : O(N)

#include <bits/stdc++.h>
using namespace std;

// priority_queue<int, vector<int>,greater<int>> p;

class solution{
public:
    vector<int> dijkstra(int n, vector<pair<int, int>> adj[], int start) {
        vector<int> distance(n,INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> p;
        distance[start] = 0;
        p.push({0,start});
        
        while(!p.empty()){
            int cur = p.top().second;
            p.pop();
            for(auto k: adj[cur]){                   // adj will be in the form {node, weight}
                int neighbour = k.first;
                int weight = k.second;                         // weight of adj node
                if(distance[cur] + weight < distance[neighbour]){
                     distance[neighbour] = distance[cur] + weight;
                     p.push({distance[neighbour],neighbour});
                }
            }
        }
        return distance;
    }
};
