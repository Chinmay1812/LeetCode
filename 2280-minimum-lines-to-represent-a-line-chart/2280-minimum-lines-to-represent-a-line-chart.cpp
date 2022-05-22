class Solution {
public:
    int minimumLines(vector<vector<int>>&v) 
    {
        int n=v.size();
        if(n==1)
        {
            return 0;
        }
        if(n==2)
        {
            return 1;
        }
        sort(v.begin(),v.end());
       long double prev=(v[1][1]-v[0][1])*(1.0)/(v[1][0]-v[0][0]);
        int c=1;
        for(int i=2;i<n;i++)
        {
            long double nxt=(long double)(v[i][1]-v[i-1][1])*(1.0)/(long double)(v[i][0]-v[i-1][0]);
            if(nxt!=prev)
            {
                c++;
            }
            prev=nxt;
        } 
        return c;
    }
};