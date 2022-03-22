class Solution {
public:
    int smallestCommonElement(vector<vector<int>>&v) 
    {
    
        int n=v.size();
        int m=v[0].size();
        int h[10001]={0};
        for(int j=0;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
                if(++h[v[i][j]]==n)
                {
                    return v[i][j];
                }
            }
           
        }
        return -1;
    }
};