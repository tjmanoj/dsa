class Solution {
  public:
  
  void dfs(int cur, int &edges,int &vertices,vector<vector<int>> &adj,vector<int> &visited){
      visited[cur] = 1;
      vertices++;
      
      for(auto k: adj[cur]){
        edges++;
        if(!visited[k]) dfs(k,edges,vertices,adj,visited);
      }
      
      return;
  }

  
  int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        int count = 0;
        vector<int> visited(v+1,0);
        vector<vector<int>> adj(v+1);
        
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        
        for(int i=1;i<=v;i++){
            
            if(!visited[i]){
                int edges = 0;
                int vertices = 0;
                dfs(i,edges,vertices,adj,visited);

                if(vertices * (vertices - 1) == edges) count++;
            }
        }

        return count;
    }
};
