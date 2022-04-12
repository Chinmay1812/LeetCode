class Solution {
public:
    vector<vector<int> > dir{{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    
    int fun(vector<vector<int>> &v,int x,int y)
    {
        int n=v.size();
        int m=v[0].size();
        int c=0;
        for(int j=0;j<dir.size();j++)
        {
            int i=x+dir[j][0];
            int k=y+dir[j][1];
            
            if(i<0||i>=n || k>=m || k<0)
            {
                continue;
            }
            c+=v[i][k]==1;
        }
        return c;
    }
    
    void gameOfLife(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        vector<vector<int> > ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x=fun(v,i,j);
               if(v[i][j]==1)
               {
                if(x<2)
                {
                    ans[i][j]=0;
                }
                else if(x==2||x==3)
                {
                    ans[i][j]=1;
                }
                else 
                {
                    ans[i][j]=0;
                }
               }
               else
                {
                   if(x==3)
                   {
                       ans[i][j]=1;
                   }
                    
                }
            }
        }
        
        v=ans;
      
        
    }
};