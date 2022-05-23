class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void fun(vector<int>&v,int id)
    {
      if(id==v.size())
      {
          ans.push_back(temp);
          return;
      }

           temp.push_back(v[id]);
           fun(v,id+1);
           temp.pop_back();
           fun(v,id+1);
      
    }
    
    vector<vector<int>> subsets(vector<int>&v) 
    {
           fun(v,0);
           return ans;
    }
};