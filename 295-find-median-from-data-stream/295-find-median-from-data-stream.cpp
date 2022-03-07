class MedianFinder {
public:
    MedianFinder() {
        
    }
    priority_queue<int> q1;
    priority_queue<int,vector<int>,greater<int>> q2;
    void addNum(int x) 
    {
        if(q1.empty()||q1.top()>x)
        {
            q1.push(x);
        }
        else
        {
            q2.push(x);
        }
        
        if(q1.size()>q2.size()+1)
        {
            while(q1.size()>q2.size()+1)
            {
                q2.push(q1.top());
                q1.pop();
            }
        }
        else if(q1.size()+1<q2.size())
        {
            while(q1.size()+1<q2.size())
            {
                q1.push(q2.top());
                q2.pop();
            }
        }
    }
    
    double findMedian()
    {
        double ans=0;
        int n=q1.size()+q2.size();
        if(n%2==0)
        {
            ans=q1.top()+q2.top();
            return ans/2.0;
        }
        else
        {
            if(q1.size()>q2.size())
            {
                ans=q1.top();
            }
            else
            {
                ans=q2.top();
            }
            return ans/1.0;
        }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */