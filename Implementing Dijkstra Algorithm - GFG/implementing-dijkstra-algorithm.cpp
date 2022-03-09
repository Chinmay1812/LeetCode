// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int s)
    {
       
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
         vector<int> vs(n+1,INT_MAX);
        q.push({0,s});
        vs[s]=0;
        
        while(!q.empty())
        {
            int dist=q.top().first;
            int node=q.top().second;
            q.pop();
            for(auto x:adj[node])
            {
                int y=x[0];
                int z=x[1];
                if( z+dist<vs[y])
                {
                    vs[y]=z+dist;
                    q.push({vs[y],y});
                }
            }
        }
    
        return vs;    
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends