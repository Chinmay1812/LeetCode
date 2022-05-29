// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(vector<int> *v,int *curr,int *vis,int node)
    {
        vis[node]=1;
        curr[node]=1;
        
        for(auto x:v[node])
        {
            if(!vis[x])
            {
                if(dfs(v,curr,vis,x))
                {
                    return 1;
                }
            }
            else if(curr[x]==1)
            {
                return 1;
            }
        }
        curr[node]=0;
        return 0;
    }
    
    bool isCyclic(int n, vector<int> v[]) 
    {
        int vis[n];
        int curr[n];
        memset(vis,0,sizeof(vis));
        memset(curr,0,sizeof(curr));
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i] && dfs(v,curr,vis,i))
            {
                return 1;
            }
        }
    return 0;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends