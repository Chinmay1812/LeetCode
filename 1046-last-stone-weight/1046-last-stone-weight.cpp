class Solution {
public:
    int lastStoneWeight(vector<int>&v) 
    {
        int n=v.size();
        multiset<int,greater<int>> s;
        for(auto x:v)
        {
            s.insert(x);
        }
        while(s.size()>1)
        {
            auto it=s.begin();
            it++;
            auto jt=s.begin();
            int val=*jt-*it;
            s.erase(it);
            s.erase(jt);
          if(val!=0)  s.insert(val);
        }
        if(s.size()==1)
        {
            return *s.begin();
        }
        return 0;
    }
};