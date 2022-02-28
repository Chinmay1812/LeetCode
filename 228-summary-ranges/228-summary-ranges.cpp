class Solution {
public:
    vector<string> summaryRanges(vector<int>&v) 
    {
        int n=v.size();
        int x=0,y=0;
        vector<string> ans;
        for(int i=0;i<n;i++)
        {
            int j=i;
            for( j=i;j<n-1;j++)
            {
                if(v[j]+1!=v[j+1])
                {
                 break;   
                }
            }
            if(j!=i)
            {
                string s=to_string(v[i])+"->"+to_string(v[j]);
                ans.push_back(s);
                i=j;
            }
            else
            {
                string s=to_string(v[j]);
                ans.push_back(s);
            }
           
        }
        return ans;
    }
};