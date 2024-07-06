// TC : O(E*K)                        as we stop when len > 2
// SC : O(N*K)                        In worst case the queue will store up (N*K) elements

#include<bits/stdc++.h>
using namespace std;
// priority_queue<{length,{dist,node}}
class solution {
public:
    int cheapestFlight(int n, vector<vector<int>>& flights, int start, int end, int k) {
        vector<int> distance(n,INT_MAX);
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> p;
        
        distance[start] = 0;
        p.push({1,{0,start}});  // initially length is 1 
        
        vector<vector<pair<int,int>>> adj(n);          
      
        for(auto i: flights){                               
            adj[i[0]].push_back({i[1],i[2]});
        }
        
        while(!p.empty()){                                 
            auto x = p.top();
            p.pop();
            
            int len = x.first;
            int dist = x.second.first;
            int cur = x.second.second;
            
            for(auto i: adj[cur]){                          
                int neighbour = i.first;
                int weight = i.second;
                
                if(dist + weight < distance[neighbour] && len+1 <= k+2){
                    distance[neighbour] = dist + weight;
                    p.push({len+1,{distance[neighbour],neighbour}});
                }
            }
        }
        if(distance[end] != INT_MAX) return distance[end];
        return -1;
    }
};
