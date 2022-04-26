class Solution {
public:
    int parent[1001];
    int rank[1001];

    void define(int n)
    {
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
            rank[i]=0;
        }
    }
    
    
    int find_parent(int a)
    {
        if(a==parent[a])
        {
            return a;     
        }
        return parent[a]=find_parent(parent[a]);
    }
    
    int comp;
    
    void Union(int a,int b)
    {
        int x=a;
        int y=b;
        a=find_parent(a);
        b=find_parent(b);
        if(a==b)
        {
            return ;
        }
        if(rank[a]>rank[b])
        {
            parent[b]=a;
        }
        else if(rank[a]<rank[b])
        {
            parent[a]=b;
        }
        else
        {
            parent[a]=b;
            rank[b]++;
        }
        comp--;
   
    }
    
    class three
    {
        public:
        int dist,x,y;
    };
    class cmp
    {
        public:
        bool operator()(three a,three b)
        {
            return a.dist>b.dist;
        }
    };
    
    int minCostConnectPoints(vector<vector<int>>&vg) 
    {
        int n=vg.size();
        define(n);
        comp=n;
        priority_queue<three,vector<three>,cmp> pq;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int dist=abs(vg[i][0]-vg[j][0])+abs(vg[i][1]-vg[j][1]);
                three var;
                var.dist=dist;
                var.x=i;
                var.y=j;
                pq.push({var});
            }
        }
        int ans=0;
        while(!pq.empty())
        {
           three var;
           var=pq.top();
           pq.pop();
           int i=var.x;
           int j=var.y;
           int dist=var.dist;
            if(find_parent(i)!=find_parent(j))
            {
                ans+=dist;
                Union(i,j);
            }
            if(comp==1)
            {
                break;
            }
            
        }
        return ans;
    }
};