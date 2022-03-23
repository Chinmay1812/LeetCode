class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& v1, vector<vector<int>>& v2) 
    {
        int n=v1.size();
        int k=v1[0].size();
        int m=v2[0].size();
        vector<vector<int>> v(n,vector<int>(m,0));
    
        for(int i=0;i<n;i++)
        {
           for(int u=0;u<m;u++)
           {
               int sum=0;
            for(int j=0;j<k;j++)
            {
                sum+=v1[i][j]*v2[j][u];
            }
              v[i][u]=sum; 
           }
            
        }
        return v;
    }
};