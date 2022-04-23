class MyHashMap {
public:
    int mod;
    vector<pair<int,int>> v[2069];
    MyHashMap() 
    {
         mod=2069;
    }
    
    void put(int x, int y) 
    {
        int ind=x%mod;

        vector<pair<int,int> >::iterator it;
        for( it=v[ind].begin();it!=v[ind].end();it++)
        {
            if(it->first==x)
            {
                it->second=y;
                return;
            }
        }
        if(it==v[ind].end())
        {
            v[ind].push_back({x,y});
        }
    }
    
    int get(int x)
    {
        int ind=x%mod;
        vector<pair<int,int> >::iterator it;
        for( it=v[ind].begin();it!=v[ind].end();it++)
        {
            if(it->first==x && it->second!=-1)
            {
                return it->second;
            }
        }
       return -1;
    }
    
    void remove(int x)
    {
        int ind=x%mod;
        vector<pair<int,int> >::iterator it;
        for( it=v[ind].begin();it!=v[ind].end();it++)
        {
            if(it->first==x)
            {
                it->second=-1;
            }
        }
        // if(it==v[ind].end())
        // {
        //     return -1;
        // }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */