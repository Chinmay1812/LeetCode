class Solution {
public:
    void setZeroes(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        vector<pair<int,int>> z;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==0)
                {
                    z.push_back({i,j});
                }
            }
        }
        for(auto x:z)
        {
            int row=x.first;
            int col=x.second;
            for(int i=0;i<n;i++)
            {
                v[i][col]=0;
            }
            for(int i=0;i<m;i++)
            {
                v[row][i]=0;
            }
           
        }
        
    }
};