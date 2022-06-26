class Solution {
public:
    vector<int> minAvailableDuration(vector<vector<int>>&v1, vector<vector<int>>&v2, int k) 
    {
        int n1=v1.size();
        int n2=v2.size();
        int x=0,y=0;
        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        while(x<n1 && y<n2)
        {
            if(v1[x][0]>v2[y][1])
            {
                y++;
            }
            else
            {
                int x1=max(v1[x][0],v2[y][0]);
                int x2=min(v1[x][1],v2[y][1]);
                if(x2-x1>=k)
                {
                    return {x1,x1+k};
                }
                else if(v1[x][1]<v2[y][1])
                {
                    x++;
                }
                else
                {
                    y++;
                }
            }
            
        }
        
    
      
        return {};
    }
};