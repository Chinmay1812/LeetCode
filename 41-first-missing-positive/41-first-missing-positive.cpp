class Solution {
public:
    int firstMissingPositive(vector<int>&v) 
    {
        int n=v.size();
      unordered_map<int,int> m;
        for(auto x:v)
        {
          if(x>0)  m[x]=1;
        }
    
        for(int i=1;i<=n+1;i++)
        {
            if(m[i]==0)
            {
                return i;
            }            
        }
       return 0;
    }
};