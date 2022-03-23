class Solution {
public:
    class three
    {
        public:
        int val,i,j;
    };
    
    class cmp
    {
        public:
        bool operator()(three a,three b)
        {
            return a.val>b.val;
        }
    };
    
    vector<vector<int>> kSmallestPairs(vector<int>&v1, vector<int>&v2, int k) 
    {
        vector<vector<int>> ans;
        int n=v1.size();
        int m=v2.size();
        int i=0,j=0;
        priority_queue<three,vector<three>,cmp> pq;
        set<pair<int,int> > s;
        three var;
        var.val=v1[0]+v2[0];
        var.i=0;
        var.j=0;
        pq.push(var);
        s.insert({0,0});
        while(!pq.empty() && k--)
        {
            auto x=pq.top();
            pq.pop();
            int u=x.i;
            int v=x.j;
            ans.push_back({v1[u],v2[v]});
            if(u<n && v<m)
            {
                if(u+1<n && s.find({u+1,v})==s.end())
                {
                    s.insert({u+1,v});
                    three node;
                    node.val=v1[u+1]+v2[v];
                    node.i=u+1;
                    node.j=v;
                    pq.push(node);
                }
                if(v+1<m && s.find({u,v+1})==s.end())
                {
                    s.insert({u,v+1});
                    three node;
                    node.val=v1[u]+v2[v+1];
                    node.i=u;
                    node.j=v+1;
                    pq.push(node);
                }
            }
            
        }
        
       return ans;
        
    }
};