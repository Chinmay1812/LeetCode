class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int,int> m;
    RandomizedSet() {
        
    }
    
    bool insert(int x) 
    {
        if(!m[x])
        {
            v.push_back(x);
            m[x]++;
            return 1;
        }
        return 0;
    }
    
    bool remove(int x) 
    {
        if(m[x]==0)
        {
            return 0;
        }
        m[x]--;
        return 1;
    }
    
    int getRandom() 
    {
        auto x=rand()%v.size();
        if(m[v[x]]==0)
        {
            return getRandom();
        }
        return v[x];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */