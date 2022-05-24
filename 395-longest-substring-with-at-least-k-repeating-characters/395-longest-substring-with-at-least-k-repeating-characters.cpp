class Solution {
public:
    int longestSubstring(string s, int k)
    {
        int n=s.size();
        if(n==0 || n<k)
        {
            return 0;
        }
        vector<int> freq(26,0);
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'a']++;
        }
        int var1,var2;
        for(int i=0;i<n;i++)
        {
            if(freq[s[i]-'a']<k)
            {
                var1=longestSubstring(s.substr(0,i),k);
                var2=longestSubstring(s.substr(i+1),k);
                break;
            }
            if(i==n-1)
            {
                return n;
            }    
        }
        return max(var1,var2);
    }
};