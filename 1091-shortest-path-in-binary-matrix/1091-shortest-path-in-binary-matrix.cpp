class Solution {
public:
    
    class two
    {
        public:
        int x,y,dist;
    };
    class cmp
    {
        public:
        bool operator()(two a,two b)
        {
            return a.dist>b.dist;
        }
        
    };
    
    
    
    
    int shortestPathBinaryMatrix(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        vector<vector<int> > dir{{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        // int vis[101][101]={0};
        queue<pair<int,int> >q;
        q.push({0,0});
        if(v[0][0]!=0||v[n-1][m-1]!=0)
        {
            return -1;
        }
        priority_queue<two,vector<two>,cmp> pq;
        two z;
        z.x=n-1;
        z.y=m-1;
        z.dist=1;
        pq.push(z);
        int dist=0;
        v[n-1][m-1]=1;
        while(!pq.empty())
        {
            two var=pq.top();
            pq.pop();
        
            auto a=var.x;
            auto b=var.y;
            if(a==0&&b==0)
            {
                return var.dist;
            }
            
            for(int i=0;i<8;i++)
            {
                auto p=a+dir[i][0];
                auto q=b+dir[i][1];
                if(p>=n||p<0||q>=m||q<0)
                {
                    continue;
                }
                if(v[p][q]==0)
                {
                    two temp;
                    temp.x=p;
                    temp.y=q;
                    temp.dist=1+var.dist;
                    v[p][q]=1;
                    pq.push(temp);
                }
                
            }
            
        }
        
      return -1;
    }
};