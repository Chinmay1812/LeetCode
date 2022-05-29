class Solution {
public:
    int maxProduct(vector<string>&v) 
    {
        int n=v.size();
        int h[n][26];
        memset(h,0,sizeof(h));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                int k=v[i][j]-'a';
                h[i][k]++;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int f=1;
                for(int a=0,b=0;a<26;a++,b++)
                {
                    if(h[i][a]>0 && h[j][b]>0)
                    {
                        f=0;
                        break;
                    }
                }
                if(f)
                {
                    int num=v[i].size()*v[j].size();
                    ans=max(ans,num);
                }
            }
        }
    
       return ans;
    }
};