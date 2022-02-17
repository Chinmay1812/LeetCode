class Solution {
public:
    
    
    void fun(vector<int>&v,int k,vector<int> &temp,vector<vector<int>> &ans,int i=0)
    {
        if(k==0)
        {
            ans.push_back(temp);
            return;
        }
        if(k<0)
        {
            return;
        }
        
        for(int j=i;j<v.size();j++)
        {
            temp.push_back(v[j]);
         if(k-v[j]>=0)   fun(v,k-v[j],temp,ans,j);
            temp.pop_back();
        }
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>&v, int k)
    {
        int n=v.size();
        vector<int> temp;
        vector<vector<int>> ans;
        fun(v,k,temp,ans);
        return ans;
        
    }
};