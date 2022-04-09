class Vector2D {
public:
    vector<vector<int>>::iterator it,jt;
    int j=0;
    Vector2D(vector<vector<int>>& v)
    {
        it=v.begin();
        jt=v.end();
    }
    
    int next() 
    {
        hasNext();
        return (*it)[j++];
    }
    
    bool hasNext()
    {
        while(it!=jt && j==(*it).size())
        {
          
            it++;
            j=0;
        }
        return it!=jt;
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D* obj = new Vector2D(vec);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */