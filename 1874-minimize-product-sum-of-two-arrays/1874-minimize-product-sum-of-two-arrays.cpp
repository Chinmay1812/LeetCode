class Solution {
public:
    int minProductSum(vector<int>&v1, vector<int>&v2) 
    {
        int a[101]={0};
        int b[101]={0};
        
        for(auto i=0;i<v1.size();i++)
        {
            a[v1[i]]++;
            b[v2[i]]++;
        }
        int x=1,y=100;
        int ans=0;
        while(x<=100 && y>=0)
        {
            if(a[x]!=0 && b[y]!=0)
            {
                int z=min(a[x],b[y]);
                ans+=z*x*y;
                a[x]-=z;
                b[y]-=z;
            }
            else if(a[x]==0)
            {
              while(x<=100 && a[x]==0)  x++;
            }
            else if(b[y]==0)
            {
              while(y>=0 && b[y]==0)  y--;
            }  
        }
        return ans;
    }
};