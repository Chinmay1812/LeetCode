class Solution {
public:
    int minOperations(vector<int>&v, int x) 
    {
        int n=v.size();
        int tot=0;
        for(int i=0;i<n;i++)
        {
            tot+=v[i];
        }
        int k=tot-x;
        int len=0;
        unordered_map<int,int> m;
        if(k==0) return n;
        int sum=0;
        m[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(m.find(sum)==m.end())
            {
                m[sum]=i;
            }
            if(m.find(sum-k)!=m.end())
            {
                len=max(len,i-m[sum-k]);
            }
        }
      
        return len==0?-1:n-len;
    }
};