class Solution {
public:
 
    int numDistinct(string s, string g) 
    {
       int n=s.size();
       int m=g.size();
       vector<double> temp(m+1,0);
       temp[0]=1;  
        for(int i=1;i<=n;i++)
        {
            for(int j=m;j>=1;j--)
            {
                if(s[i-1]==g[j-1])
                {
                    temp[j]+=temp[j-1];
                }
            }
        }
        return (int)temp[m];
    }
};