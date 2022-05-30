class Solution {
public:
    int longestConsecutive(vector<int>&v) 
    {
        int n=v.size();
        if(n==0) return 0;
        int c=1,ans=1;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++)
        {
            if(v[i]==v[i-1]+1)
            {
                c++;
            }
            else if(v[i]==v[i-1])
            {
                
            }
            else
            {
                c=1;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};