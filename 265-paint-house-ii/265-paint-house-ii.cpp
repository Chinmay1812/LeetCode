class Solution {
public:
    int minCostII(vector<vector<int>>&v) 
    {
        int n=v.size();
        int k=v[0].size();
        // int dp[n][k];
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<k;j++)
        //     {
        //         dp[i][j]=INT_MAX;
        //     }
        // }
        
//         for(int i=0;i<k;i++)
//         {
//             dp[0][i]=v[0][i];
//         }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                int val=INT_MAX;
                
                for(int l=0;l<k;l++)
                {
                    if(l==j)
                    {
                        continue;
                    }
                    val=min(val,v[i-1][l]);
                }
                v[i][j]=v[i][j]+val;
            }   
        }
        int ans=INT_MAX;
        for(int i=0;i<k;i++)
        {
            ans=min(v[n-1][i],ans);
        }
        return ans;
    }
};