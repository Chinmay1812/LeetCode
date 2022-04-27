class Solution {
public:
    int maxLength(vector<string>&v) 
    {
        int ans=0;
        int n=v.size();
        int N=pow(2,n);
        for(int i=0;i<N;i++)
        {
            int x=i;
            int c=0;
            int m[26]={0};
            string g="";
            while(x)
            {
                if((x&1))
                {
                  
                    for(int i=0;i<v[c].size();i++)
                    {
                        if(m[v[c][i]-'a']==0)
                        {
                            g+=v[c][i];
                        }   
                        else
                        {
                            g="";
                            break;
                        }
                        m[v[c][i]-'a']++;
                    }
                }
                c++;
                x>>=1;
            }
            int z=g.size();
            ans=max(z,ans);
        }
        
        return ans;
    }
};