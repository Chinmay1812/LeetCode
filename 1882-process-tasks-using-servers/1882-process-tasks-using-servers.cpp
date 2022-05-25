class Solution {
public:
    class two
    {
        public:
        int wt;
        int id;
    };
    
    class three 
    {
        public:
        int val;
        int wt;
        int id;
    };
    
    class Free
    {
        public:
        bool operator()(two a,two b)
        {
            if(a.wt==b.wt)
            {
                return a.id>b.id;
            }
            return a.wt>b.wt;
        }
    };
    
    class Busy
    {
        public:
        bool operator()(three a,three b)
        {
            // if(a.val==b.val)
            // {
            //     if(a.wt==b.wt)
            //     {
            //         return a.id>b.id;
            //     }
            //     return a.wt>b.wt; 
            // }
            // if(a.wt==b.wt)
            // {
            //     return a.id>b.id;
            // }
            return a.val>b.val;
        }
    };
    
    vector<int> assignTasks(vector<int>&s, vector<int>&t)
    {
        int n=t.size();
        vector<int> ans(n,0);
        priority_queue<two,vector<two>,Free> free;
        priority_queue<three,vector<three>,Busy> busy;
        for(int i=0;i<s.size();i++)
        {
            two var;
            var.wt=s[i];
            var.id=i;
            free.push(var);
        }
        int time=0;
        for(int i=0;i<n;i++)
        {
            time=max(time,i);
            
            if(free.empty())
            {
                auto var=busy.top();
                two x;
                x.wt=var.wt;
                x.id=var.id;
                free.push(x);
                busy.pop();
                time=max(time,var.val);
            }
            
            while(!busy.empty() && busy.top().val==time)
            {
                auto var=busy.top();
                two x;
                x.wt=var.wt;
                x.id=var.id;
                free.push(x);
                busy.pop();
            }
            auto server=free.top();
            free.pop();
            ans[i]=server.id;
            
            three var;
            var.val=time+t[i];
            var.wt=server.wt;
            var.id=server.id;
            busy.push(var);
        }
        return ans;
    }
};