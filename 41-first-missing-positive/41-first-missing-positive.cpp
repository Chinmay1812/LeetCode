class Solution {
public:
    int firstMissingPositive(vector<int>&v) 
    {
        int n=v.size();
      unordered_map<int,int> m;
        for(auto x:v)
        {
            m[x]++;
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