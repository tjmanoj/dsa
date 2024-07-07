// TC : O(N* 10^5)                for 10^5 nodes at worst case it will be added to queue and N is array elements (each node multiplied with arrary elements)
// SC : O(10^5)
#include <bits/stdc++.h>
using namespace std;
// {number, steps}
class solution{
    public:
    int minimumSteps(vector<int>& arr, int start, int target)  {
        if(start == target) return 0;
        vector<int> distance(100000,INT_MAX);
        distance[start] = 0;
        queue<pair<int,int>> q;
        q.push({start,0});    
    
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            int num = x.first;
            int steps = x.second;
            for(auto k: arr){
                int neighbour = (num * k ) % 100000;
                if(distance[neighbour] > steps+1){
                    distance[neighbour] = steps+1;
                    q.push({neighbour,steps+1});
                    if(neighbour == target) return distance[neighbour];
                }
            }
        }
        return -1;
    }
};
