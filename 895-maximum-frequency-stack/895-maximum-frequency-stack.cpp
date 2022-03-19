class FreqStack {
public:
    int maxfreq;
    unordered_map<int,stack<int>> m;
    unordered_map<int,int> freq;
    
    FreqStack() {
        maxfreq=0;
    }
    
    void push(int x) 
    {
        if(++freq[x]>maxfreq)
        {
            maxfreq=freq[x];
        }
        m[freq[x]].push(x);
        
    }
    
    int pop() 
    {
        int ans=m[maxfreq].top();
        m[maxfreq].pop();
        freq[ans]--;
        if(m[maxfreq].empty())
        {
            maxfreq--;
        }
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */