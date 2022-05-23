class Solution {
public:
    vector<vector<int> > ans;
    vector<int> temp;
    void fun(vector<int>&v,int id=0)
    {
        int n=v.size();
        // if(id==n)
        // {
            ans.push_back(temp);
            // return;
        // }
        for(int i=id;i<n;i++)
        {
             if(i>id && v[i]==v[i-1])
            {
                continue;
            }

            temp.push_back(v[i]);
            fun(v,i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>&v) 
    {
         temp.clear();
         sort(v.begin(),v.end());
          fun(v,0);
          return ans;
    }
};