class MyHashMap {
public:
     int a[1000001];
    MyHashMap()
    {
          memset(a,-1,sizeof(a));
    }
   
    void put(int x, int y) 
    {
        a[x]=y;
    }
    
    int get(int x) 
    {
        if(a[x]==-1)
        {
            return -1;
        }
        return a[x];
    }
    
    void remove(int x) 
    {
        a[x]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */