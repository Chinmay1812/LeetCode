class Solution {
public:
    vector<vector<int>> ans;
    
    void dfs(vector<vector<int>>&v,vector<int>&temp,int z,bool *vis)
    {
    
        int n=v.size();
        if(z==n-1)
        {
            ans.push_back(temp);
            return;
        }
        
        for(auto x:v[z])
        {
              temp.push_back(x);  
              dfs(v,temp,x,vis);
              temp.pop_back();
        }
        
    }   
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>&v) 
    {
        vector<int> temp;
        bool vis[v.size()];
        temp.push_back(0);  
        dfs(v,temp,0,vis);
        return ans;
    }
};