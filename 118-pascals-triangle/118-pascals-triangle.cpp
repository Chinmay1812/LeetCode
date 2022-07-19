class Solution {
public:
    vector<vector<int> > ans;
    vector<vector<int>> generate(int n) 
    {
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        if(n==1)
        {
            return ans;
        }
        v.push_back(1);
        ans.push_back(v);
        if(n==2)
        {
            return ans;
        }
        
        for(int i=3;i<=n;i++)
        {
           vector<int> v;
           v.push_back(1);
           vector<int> temp=ans.back();
           for(int i=1;i<temp.size();i++)
           {
               v.push_back(temp[i]+temp[i-1]);
           }
             v.push_back(1);
             ans.push_back(v);
        }
        return ans;
     
    }
};