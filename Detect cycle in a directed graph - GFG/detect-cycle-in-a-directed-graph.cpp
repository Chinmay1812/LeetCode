// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool cycle(int u,bool *vis,bool *f,vector<int>adj[])
    {
        vis[u]=1;
        f[u]=1;
        for(auto x:adj[u])
        {
            if(!vis[x])
            {
                 if(cycle(x,vis,f,adj))
                 {
                     return 1;
                 }
          
            }
            else if(f[x]==1)
            {
                return 1;
            }
          
        }
       f[u]=0;
       return 0;
    }
    
    bool isCyclic(int n, vector<int> adj[]) 
    {
        int e=adj->size();
        bool vis[n]={0};
        bool f[n]={0};
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(cycle(i,vis,f,adj))
                {
                    return true;
                }
            }
        }
        return false;
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