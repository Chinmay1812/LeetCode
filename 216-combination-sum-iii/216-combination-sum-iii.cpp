class Solution {
public:
    vector<vector<int>> ans;
    
    void fun(vector<int>&v,int n,int k,vector<int>&temp,int i=0) 
    {
        if(k==0 && temp.size()==n)
        {
            ans.push_back(temp);
            return; 
        }
        if(k<0 || temp.size()>n)
        {
            return;
        }
        for(int j=i;j<v.size();j++)
        {
            temp.push_back(v[j]);
            fun(v,n,k-v[j],temp,j+1);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int n, int k) 
    {
        vector<int> v;
        for(int i=1;i<=9;i++)
        {
            v.push_back(i);
        }
        vector<int> temp;
        fun(v,n,k,temp);
        return ans;
    }
};