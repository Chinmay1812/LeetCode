class Solution {
public:
    
    vector<vector<int>> ans;
    void fun(vector<int>&v,int n)
    {
         
          
          while(n)
          {
              int x=n;
              int j=0;
               vector<int> temp;
              while(x)
              {
                  if(x&1)
                  {
                      temp.push_back(v[j]);
                  }
                  j++;
                  x>>=1;
              }
              n--;
              ans.push_back(temp);
          }
        
    }
    
    
    vector<vector<int>> subsets(vector<int>&v) 
    {
      
          int n=pow(2,v.size());
        fun(v,n-1);
        ans.push_back(vector<int>{});
        return ans;
    }
};