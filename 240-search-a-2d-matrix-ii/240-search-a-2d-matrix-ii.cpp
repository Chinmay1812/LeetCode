class Solution {
public:
    bool searchMatrix(vector<vector<int>>&v, int k)
    {
        int n=v.size();
        int m=v[0].size();
        
        int x=0,y=m-1;
        
        while(x<n && y>=0)
        {
            if(v[x][y]>k)
            {
                y--;
            }
            else if(v[x][y]<k)
            {
                x++;
            }
            else
            {
                return 1;
            }
            
        }
        
        return 0;
    }
};