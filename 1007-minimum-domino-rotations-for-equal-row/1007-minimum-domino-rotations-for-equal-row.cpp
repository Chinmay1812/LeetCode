class Solution {
public:
    int minDominoRotations(vector<int>&v1, vector<int>&v2) 
    {
        int n=v1.size();
        int ans=INT_MAX;
        for(int i=1;i<=6;i++)
        {
            int c=0;
            int f=1;
            for(int j=0;j<n;j++)
            {
                if(v1[j]!=i && v2[j]==i)
                {
                    c++;
                }
                else if(v1[j]!=i && v2[j]!=i)
                {
                    f=0;
                    break;
                }
            }
       if(f)     ans=min(ans,c);
        }
        
        for(int i=1;i<=6;i++)
        {
            int c=0;
            int f=1;
            for(int j=0;j<n;j++)
            {
                if(v2[j]!=i && v1[j]==i)
                {
                    c++;
                }
                else if(v2[j]!=i && v1[j]!=i)
                {
                    f=0;
                    break;
                }
            }
       if(f)     ans=min(ans,c);
        }
        
        
        
        
        return ans==INT_MAX?-1:ans;
    }
};