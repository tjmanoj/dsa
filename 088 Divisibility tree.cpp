class Solution {
public:
    int ans = 0;
    int dfs(int i,vector<vector<int>> &adj, vector<int> &visited){
        visited[i] = 1;
        int count = 0;			// to count the size of the subtree
        for(auto k:adj[i]){
            if(!visited[k]){
                int result = dfs(k,adj,visited);
                if(result % 2 == 0) ans++;
                else count += result;
            }
        }
        return count+1;		// if last node before leaf node calls the leaf node then it will return 0 + 1, 
	    			// because there is one node below the calling node, so the size of that node
	    			// s subtree is 1.
    }
	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    vector<int> visited(n+1,0);
	    vector<vector<int>> adj(n+1);
	    
	    for(auto edge:edges){
	        adj[edge[0]].push_back(edge[1]);
	        adj[edge[1]].push_back(edge[0]);
	    }
	    
	    dfs(1,adj,visited);
	    return ans;
	}
};
