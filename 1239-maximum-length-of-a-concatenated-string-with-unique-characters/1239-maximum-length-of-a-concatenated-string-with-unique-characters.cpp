class Solution {
public:
    int m[26]={0};
    int ans;
    void fun(vector<string>&v,int j)
    {
        int n=v.size();
        int res=0;

        for(int i=0;i<26;i++)
        {
            if(m[i]>1)
            {
                return;
            }
            else if(m[i]==1)
            {
                res++;
            }
        }
        ans=max(ans,res);
        for(int i=j;i<n;i++)
        {
            for(auto x:v[i])
            {
                m[x-'a']++;
            }
            fun(v,i+1);
            for(auto x:v[i])
            {
                m[x-'a']--;
            }
        }
        
        
        
    }
    
    
    
    
    
    int maxLength(vector<string>&v) 
    {
        ans=0;
        fun(v,0);
        return ans;
    }
};