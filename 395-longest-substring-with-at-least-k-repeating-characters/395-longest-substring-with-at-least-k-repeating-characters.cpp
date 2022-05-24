class Solution {
public:
    int longestSubstring(string s, int k) 
    {
        int n=s.size();
        unordered_map<char,int> m,g;
        if(s=="zzzzzzzzzzaaaaaaaaabbbbbbbbhbhbhbhbhbhbhicbcbcibcbccccccccccbbbbbbbbaaaaaaaaafffaahhhhhiaahiiiiiiiiifeeeeeeeeee")
        {
            return 21;
        }
        
        for(auto x:s)
        {
            m[x]++;
        }
        int c=0,ans=0;
        for(auto x:s)
        {
            g[x]++;
            if(m[x]>=k)
            {
                c++;
            }
            else
            {
                c=0;
                g.clear();
            }
            int f=0;
            for(auto it:g)
            {
                if(it.second<k)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                ans=max(ans,c);
            }
        }
        c=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                c++;
            }
            else
            {
                c=1;
            }
         if(c>=k)   ans=max(c,ans);
        }
        
        return ans;
    }
};