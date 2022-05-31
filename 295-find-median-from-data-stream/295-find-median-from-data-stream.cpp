class MedianFinder {
public:
    multiset<int> s;
    multiset<int>::iterator lo,hi;
    
    MedianFinder() {
        
    }
    
    void addNum(int x) 
    {
        int n=s.size();
        s.insert(x);
        
        if(n==0)
        {
            lo=s.begin();
            hi=s.begin();
        }
        else if(n&1)
        {
            if(x>=*hi)
            {
                ++hi;
            }
            else
            {
                lo--;
            }   
        }
        else
        {
            if(x>=*hi)
            {
                lo++;
            }
            else
            {
              lo=--hi;  
            }
        }
      
    }
    
    double findMedian() 
    {
        double ans=(*lo+*hi)/2.0;
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */