class Solution {
public:
    class two
    {
        public:
        int val;
        int num;
        
    };
    
    class cmp
    {
        public:
        bool operator()(two &a,two &b)
        {
            if(a.val==b.val)
            {
                return a.num>b.num;
            }
            return a.val>b.val;
        }
    };
    
    
    vector<int> findClosestElements(vector<int>&v, int k, int x) 
    {
        int n=v.size();
        priority_queue<two,vector<two>,cmp> pq;
        for(auto &z:v)
        {
            two var;
            var.val=abs(z-x);
            var.num=z;
            pq.push(var);
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().num);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};