class Solution {
public:
    vector<vector<int>> ans;
    
    void dfs(vector<vector<int>>&v,vector<int>&temp,int z)
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
              dfs(v,temp,x);
              temp.pop_back();
        }
        
    }   
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>&v) 
    {
        vector<int> temp;
        temp.push_back(0);  
        dfs(v,temp,0);
        return ans;
    }
};