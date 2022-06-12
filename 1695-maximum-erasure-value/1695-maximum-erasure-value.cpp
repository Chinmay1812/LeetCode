class Solution {
public:
    int maximumUniqueSubarray(vector<int>&v)
    {
        int n=v.size();
        int ans=0;
        unordered_map<int,int> m;
        int i=0,j=0;
        int sum=0;
        while(i<n && j<n)
        {
            if(m[v[j]]==0)
            {
                sum+=v[j];
                m[v[j]]++;
                j++;
            }
            else
            {
                while(i<n && m[v[j]]>0)
                {
                    sum-=v[i];
                    m[v[i]]--;
                    i++;
                }
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};