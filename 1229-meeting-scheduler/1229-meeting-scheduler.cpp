class Solution 
{
public:
    
    class two
    {
        public:
        int start,end;
    };
    
    class cmp
    {
        public:
        bool operator()(two a,two b)
        {
            return a.start>b.start;
        }   
    };
    
    vector<int> minAvailableDuration(vector<vector<int>>&v1, vector<vector<int>>&v2, int k) 
    {
        priority_queue<two,vector<two>,cmp> q;
        
        for(auto x:v1)
        {
            if(x[1]-x[0]>=k)
            {
                two var;
                var.start=x[0];
                var.end=x[1];
                q.push(var);
            }
        }
        
        for(auto x:v2)
        {
            if(x[1]-x[0]>=k)
            {
                two var;
                var.start=x[0];
                var.end=x[1];
                q.push(var);
            }
        }
        
        vector<int> ans;
        two first;
        if(!q.empty())
        {
         first=q.top();
        q.pop();
        }
        while(!q.empty())
        {
          
          two second=q.top();
          q.pop();
          int x=second.start+k;
            if(x<=first.end)
            {
                ans.push_back(second.start);
                ans.push_back(second.start+k);
                break;
            }
            first=second;
            
        }
        return  ans;
    }
};