class MyHashSet {
public:
    unordered_map<int,int> m;
    MyHashSet() {
        
    }
    
    void add(int x) 
    {
        m[x]=1;
    }
    
    void remove(int x) 
    {
        if(m[x]>0)
        {
           m[x]=0; 
        }
    }
    
    bool contains(int x) 
    {
        return m[x];    
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */