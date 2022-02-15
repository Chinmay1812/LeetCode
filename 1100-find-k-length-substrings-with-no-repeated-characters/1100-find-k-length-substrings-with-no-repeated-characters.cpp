class Solution {
public:
    int numKLenSubstrNoRepeats(string s, int k) 
    {
        int ans=0;
        int n=s.size();
        string p;
        if(k>n)
        {
            return 0;
        }
        unordered_map<char,int> m;
        for(int i=0;i<k;i++)
        {
           p+=s[i];
            m[s[i]]++;
            
        }
        for(int i=k;i<n+1;i++)
        {
            int j=0;
            for(;j<k;j++)
            {
                if(m[p[j]]>1)
                {
                    break;
                }
            }
            if(j==k)
            {
                ans++;
            }
            if(i<n){
                m[s[i-k]]--;
            m[s[i]]++;
            p+=s[i];
            p.erase(p.begin());
            }
        }
        
        
        return ans;
    }
};