class Solution {
public:
    void setZeroes(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
      unordered_map<int,int> row,col;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(row[i]||col[j])
                {
                    v[i][j]=0;
                }
                
            }
           
        }
        
    }
};