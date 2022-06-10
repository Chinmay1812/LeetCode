class Solution {
public:
    bool isValidSudoku(vector<vector<char>>&v) 
    {
        int n=9;
        for(int i=0;i<n;i+=3)
        {
            for(int j=0;j<n;j+=3)
            {
                unordered_map<char,int> m;
                for(int p=i;p<i+3;p++)
                {
                    for(int q=j;q<j+3;q++)
                    {
                        m[v[p][q]]++;
                        if(m[v[p][q]]>1 && v[p][q]!='.')
                        {
                            return 0;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int> m;
            for(int j=0;j<n;j++)
            {
                       m[v[i][j]]++;
                        if(m[v[i][j]]>1&& v[i][j]!='.')
                        {
                            return 0;
                        }
            }
        }
        for(int i=0;i<n;i++)
        {
            unordered_map<char,int> m;
            for(int j=0;j<n;j++)
            {
                       m[v[j][i]]++;
                        if(m[v[j][i]]>1&& v[j][i]!='.')
                        {
                            return 0;
                        }
            }
        }
        
        return 1;
    }
};