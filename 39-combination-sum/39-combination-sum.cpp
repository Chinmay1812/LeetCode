class Solution {
public:
    
    
//     void fun(vector<int>&v,int k,vector<int> &temp,vector<vector<int>> &ans,int i=0)
//     {
//         if(k==0)
//         {
//             ans.push_back(temp);
//             return;
//         }
//         if(k<0)
//         {
//             return;
//         }
        
//         for(int j=i;j<v.size();j++)
//         {
//             temp.push_back(v[j]);
//          if(k-v[j]>=0)   fun(v,k-v[j],temp,ans,j);
//             temp.pop_back();
//         }
//     }
    
    
    
//     vector<vector<int>> combinationSum(vector<int>&v, int k)
//     {
//         int n=v.size();
//         vector<int> temp;
//         vector<vector<int>> ans;
//         fun(v,k,temp,ans);
//         return ans;
        
//     }
    
    vector<vector<int> > ans;
    vector<int> temp;
    set<vector<int> > s;
    void fun(vector<int>&v,int k,int sum=0,int id=0)
    {
          if(sum>k)
          {
              return;
          }
          if(sum==k)
          {
              
           
             ans.push_back(temp);
     
             
              return;
          }
      
      for(int i=id;i<v.size();i++)
      {
          temp.push_back(v[i]);
          fun(v,k,sum+v[i],i);        
          temp.pop_back();
      }
    
    }
    
    vector<vector<int> > combinationSum(vector<int> &v, int k) 
    {
        // sort(v.begin(),v.end());
        fun(v,k);
        return ans;
        
    }
};