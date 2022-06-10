class Solution {
public:
    bool fun(string &s,int k)
    {
        
      unordered_map<char,int> m;   
      int n=s.size();
        if(k>n)
        {
            return 0;
        }
        
        for(int i=0;i<k;i++)
        {
            m[s[i]]++;
        }
        if(m.size()==k)
        {
            return 1;
        }
        for(int i=k;i<n;i++)
        {
            m[s[i-k]]--;
            if(m[s[i-k]]==0)
            {
                m.erase(m.find(s[i-k]));
            }
            m[s[i]]++;
            if(m.size()==k)
        {
            return 1;
        }
            
        }
    
       return 0;
    }
    
    int lengthOfLongestSubstring(string s)
    {
        int lo=1,hi=5*10000;
        int ans=1;
        if(s.empty()) return 0;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
           
            if(fun(s,mid))
            {
                ans=max(ans,mid);
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
         
        }
        return ans;
    }
};