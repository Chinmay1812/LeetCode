class Solution {
public:
    int longestMountain(vector<int>&v) 
    {
        int n=v.size();
        if(n==1||n==2)
        {
            return 0;
        }
        int ans=0;
        for(int j=0;j<n;j++)
        {
            int x=0;
            int i=j;
            while(i<n-1 && v[i]<v[i+1])
            {
                x++;
                i++;
            }
            int y=0;
            while(i<n-1 && v[i]>v[i+1]) 
            {
                i++;
                y++;
            }
            
            if(x&&y) ans=max(ans,x+y+1);
            
            while(i<n-1 && v[i]==v[i+1]) ++i;
            
        }
        return ans;
    }
};