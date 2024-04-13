//Input
// 5 7    nodes and edges
// 1 2
// 1 3
// 2 3
// 2 4
// 2 5
// 3 5
// 4 5

//Adjacency matric
//TC  : O(E)
//SC  : O(N^2)

#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n,e;
  cin >> n >> e;
  vector<vector<int>> adj(n+1,vector<int>(n+1,0));
  
  for(int i=0;i<e;i++){
      int f,t;          // from , to 
      cin >> f >> t;
      adj[f][t] = 1;
      adj[t][f] = 1;   // if directed remove this line 
  }
  
  for(int i=1;i<=n;i++){
      for(auto k: adj[i]) cout << k << ' ';
      cout << endl;
  }
  
  return 0;
}

// Ouput for adjacency matrix
// 0 0 1 1 0 0 
// 0 1 0 1 1 1 
// 0 1 1 0 0 1 
// 0 0 1 0 0 1 
// 0 0 1 1 1 0 


// Adjacency List
//TC  : O(E)
//SC  : O(2 * E)  every node is added 2 node's neighbour because if 1 is neighbour of 3 then 3 is also a neighbour of 1

