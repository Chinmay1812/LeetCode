class Solution {
public:
    string longestCommonPrefix(vector<string>&v)
    {
        int n=v.size();
        string s=v[0];
        for(int i=1;i<n;i++)
        {
                int x=0,y=0;
                while(x<s.size() && y<v[i].size()&&s[x]==v[i][y])
                {
                        x++;
                        y++;
                }
                
                for(int j=s.size()-1;j>=x;j--)
                {
                   s.pop_back();
                }
            
        }
        return s;
    }
};