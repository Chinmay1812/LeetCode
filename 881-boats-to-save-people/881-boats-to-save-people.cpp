class Solution {
public:
    int numRescueBoats(vector<int>&v, int k) 
    {
        sort(v.begin(),v.end());
        int ans=0;
        int n=v.size();
        int a=0,b=n-1;
        
        while(a<=b)
        {
           if(v[a]+v[b]<=k)
           {
               a++;
               b--;
           }
            else
            {
                b--;
            }
            ans++;
        }
    
        return ans;
    }
};