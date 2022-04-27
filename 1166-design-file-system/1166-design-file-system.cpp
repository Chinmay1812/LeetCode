class FileSystem {
public:
    unordered_map<string,int> m;
    FileSystem() {
    }
    
    bool createPath(string s, int x) 
    {
        if(s.empty()||s[0]!='/')
        {
            return 0;
        }
        string temp=s;
        while(temp[temp.size()-1]!='/')
        {
            temp.pop_back();
        }
        temp.pop_back();
        if(m.find(s)!=m.end())
        {
            return 0;
        }
        
        if(temp.empty() ||m.find(temp)!=m.end())
        {
            m[s]=x;
            return 1;
        }
        return 0;
    }
    
    int get(string s) 
    {
        if(s.empty())
        {
            return -1;
        }
        if(m.find(s)!=m.end())
        {
            return m[s];
        }
        return -1;
    }
};

/**
 * Your FileSystem object will be instantiated and called as such:
 * FileSystem* obj = new FileSystem();
 * bool param_1 = obj->createPath(path,value);
 * int param_2 = obj->get(path);
 */