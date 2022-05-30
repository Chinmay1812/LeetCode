class Solution {
public:
    int longestConsecutive(vector<int>&v) 
    {
        int n=v.size();
        if(n==0) return 0;
        unordered_set<int> s(v.begin(),v.end());
        int ans=0;
        for(auto &x:s)
        {
            if(s.find(x)==s.end())
            {
                continue;
            }
            
            int prev=x-1;
            int next=x+1;
            while(s.find(prev)!=s.end()) s.erase(prev--);
            while(s.find(next)!=s.end()) s.erase(next++);
            ans=max(ans,next-prev-1);
        }
        return ans;
    }
};