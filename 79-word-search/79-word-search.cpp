class Solution {
public:
    int vis[7][7];
    vector<vector<int>> dir{{0,1},{0,-1},{1,0},{-1,0}};
    bool dfs(vector<vector<char>>&v, string &s,int x,int y,string &temp)
    {
        int n=v.size();
        int m=v[0].size();
        vis[x][y]=1;
        if(temp==s)
        {
            return true;
        }
        for(int i=0;i<4;i++)
        {
            int dx=x+dir[i][0];
            int dy=y+dir[i][1];
            // cout<<dx<<" "<<dy<<endl;
            if(dx>=n||dx<0||dy>=m||dy<0 || vis[dx][dy]==1)
            {
                continue;
            }
            temp+=v[dx][dy];
            
            if(temp[temp.size()-1]==s[temp.size()-1]&& dfs(v,s,dx,dy,temp))
            {
                return true;
            }
            
            temp.pop_back();
        }   
        vis[x][y]=0;
        return false;
    }
    bool exist(vector<vector<char>>&v, string s) 
    {
       
        
        int n=v.size();
        int m=v[0].size();
        for(int i=0;i<n;i++)
        {
            string temp="";
            memset(vis,0,sizeof(vis));
            for(int j=0;j<m;j++)
            {
                temp=v[i][j];
                if(v[i][j]==s[0] && dfs(v,s,i,j,temp))
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};