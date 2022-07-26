class Solution {
public:
vector<int> shortestDistanceColor(vector<int>&t, vector<vector<int>>&q) 
  {
    map<int,set<int> > m;
    int n=t.size();
    for(int i=0;i<n;i++)
    {
        m[t[i]].insert(i);
    }
    vector<int> ans;    
    for(auto &x:q)
    {
        int col=x[1];
        int  id=x[0];
        if(m.find(col)==m.end())
        {
            ans.push_back(-1);
            continue;
        }
        int val=INT_MAX;
        auto it=m[col].lower_bound(id);
        auto jt=m[col].end();
        if(it==jt ||*it>id)
        {  
            it--;
          if(*it<id){
              val=abs(*it-id);
            
          }
            
        }
        else
        {
            val=0;
        }
        
        auto kt=m[col].upper_bound(id);
        if(kt!=jt)
        {
           
            val=min(val,*kt-id);
        }
        
        if(val==INT_MAX)
        {
             ans.push_back(-1);
        }
        else
        {
             ans.push_back(val);
        }
    }
         return ans;
  }
};