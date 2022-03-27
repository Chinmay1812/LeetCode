class Solution {
public:
    class three
    {
        public:
        int val,row;
    };
    
    class cmp
    {
        public:
        bool operator()(three a,three b)
        {
            if(a.val==b.val)
            {
                return a.row>b.row;
            }
            else
            {
                return a.val>b.val;
            }   
        }
        
    };
    
    vector<int> kWeakestRows(vector<vector<int>>&a, int k)
    {
        int n=a.size();
        int m=a[0].size();
        priority_queue<three,vector<three>,cmp> pq;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            sum=n-(upper_bound(a[i].rbegin(),a[i].rend(),0)-a[i].rbegin());
            
            three var;
            var.val=sum;
            var.row=i;
            pq.push(var);
        }
        vector<int> ans;
        while(k--)
        {
            three var=pq.top();
            pq.pop();
            ans.push_back(var.row);
        }
        return ans;
    }
};