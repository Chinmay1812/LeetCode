class MyCircularQueue {
public:
    int n;
    vector<int> v;
    int p,q;
    int size;
    MyCircularQueue(int k) 
    {
        n=k;
        v.resize(n);
        p=0,q=0;
        size=0;
    }
    
    bool enQueue(int x) 
    {
        if(size<n)
        {
            if(q==n)
            {
                q=0;
            }
            v[q++]=x;
            size++;
            return 1;
        }
        return 0;
    }
    
    bool deQueue() 
    {
        if(size>0)
        {
            p++;
            if(p==n)
            {
                p=0;
            }
            size--;
            return 1;
        }
        return 0;
    }
    
    int Front() 
    {
        if(size)
        {
            return v[p];
        }
        return -1;
    }
    
    int Rear() 
    {
      if(size>0)
      {
          return v[(q-1+n)%n];
      }
      return -1;  
    }
    
    bool isEmpty() 
    {
        return size==0;    
    }
    
    bool isFull()
    {
      return size==n;   
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */