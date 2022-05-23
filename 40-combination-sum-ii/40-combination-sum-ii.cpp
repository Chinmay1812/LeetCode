class Solution {
public:
    vector<vector<int> > ans;
    vector<vector<int>> combinationSum2(vector<int>&v, int k) 
    {
        vector<int> temp;
        sort(v.begin(),v.end());
        fun(0,v,k,temp);
        return ans;
    }
   void fun(int j,vector<int>&v, int k,vector<int> &temp)
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
        
        for(int i=j;i<v.size();i++)
        {
            if(i>j && v[i]==v[i-1]) continue;
            
    
            
            temp.push_back(v[i]);
            fun(i+1,v,k-v[i],temp);
            temp.pop_back();
        }
     
    }
};