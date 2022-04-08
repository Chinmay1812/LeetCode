class KthLargest
{
public:
    priority_queue<int,vector<int>,greater<int>> q;
    int kl;
    KthLargest(int k, vector<int>&v)
    {
        kl=k;
        for(auto x:v)
        {
            q.push(x);
        }
        
        while(q.size()>k)
        {
            q.pop();
        }
        
    }
    
    int add(int val) 
    {
        q.push(val);
        while(q.size()>kl)
        {
            q.pop();
        }
        return q.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */