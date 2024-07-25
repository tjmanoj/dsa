#include <iostream>
using namespace std;

int k= 0;
void dfs(int i,int **adj,int n,int ans[],int visited[]){
    visited[i] = 1;
    ans[k++] = i;
    
    for(int k=0;k<n;k++){
        if(adj[i][k] == 1 && !visited[k]) dfs(k,adj,n,ans,visited);
    }
}

int main()
{
    int n,e;
    cin >> n >> e;
    int** adj = new int*[n];
    int visited[n] = {0};
    int ans[n];
    
    for(int i=0;i<n;i++) adj[i] = new int[n];
    
    
    for(int i=0;i<e;i++){
        int f,t;
        cin >> f >> t;
        adj[f][t] = 1;
        adj[t][f] = 1;
    }
    
    dfs(0,adj,n,ans,visited);
    
    for(int i=0;i<n;i++){
        cout << ans[i] << ' ';
    }
}


// 4 4
// 0 1
// 0 2
// 1 2
// 2 3


// 0 1 2 3
