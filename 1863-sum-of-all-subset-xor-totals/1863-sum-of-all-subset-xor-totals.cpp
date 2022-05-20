class Solution {
public:
    vector<int> temp;
    int ans=0;
    void fun(vector<int>&v,int i=0)
    {
        int res=0;
      if(temp.size()>0)
      {
          for(int j=0;j<temp.size();j++)
          {
              res^=temp[j];
          }
      }
        ans+=res;

        for(int j=i;j<v.size();j++)
        {
            temp.push_back(v[j]);
            fun(v,j+1);
            temp.pop_back();
        }
    }
    
    int subsetXORSum(vector<int>&v) 
    {
        int n=v.size();
        ans=0;
        fun(v,0);
        return ans;
    }
};