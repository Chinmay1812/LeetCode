class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>&v, int k) 
    {
        int mod=v.size()*v[0].size();
        int n=v.size();
        int m=v[0].size();
        k%=mod;
        
        while(k--)
        {
            int last=v[n-1][m-1];
            
            for(int i=n-1;i>=0;i--)
            {
                for(int j=m-1;j>=0;j--)
                {
                    if(i==0 && j==0)
                    {
                        continue;
                    }
                    else if(j==0)
                    {
                        v[i][j]=v[i-1][m-1];
                    }
                    else
                    {
                        v[i][j]=v[i][j-1];
                    }
                   
                }
            }
            v[0][0]=last;
        }
        return v;
    }
};