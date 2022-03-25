class Solution {
public:
    
    	vector<int> topoSort(int n, vector<int> *adj) 
	{
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        for(auto x:adj[i])
	        {
	            m[x]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i=0;i<n;i++)
	    {
	        if(m[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    vector<int> ans;
	    
	    while(!q.empty())
	    {
	     int x=q.front();
	     q.pop();
	     for(int y:adj[x])
	     {
	         m[y]--;
	         if(m[y]==0)
	         {
	             q.push(y);
	         }
	     }
	        ans.push_back(x);
	        
	    }
	    
	    
	    return ans;
	    
	}
    
    
    
    
    bool canFinish(int n, vector<vector<int>>&graph) 
    {
        vector<int> v[n];
        
        for(auto x:graph)
        {
            v[x[1]].push_back(x[0]);
        }
        vector<int> temp=topoSort(n,v);
        return temp.size()==n;
        
    }
};