class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&v) 
    {
        int n=v.size();
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        vector<int> temp;
        int x=0;
        temp.push_back(v[x][0]);
        temp.push_back(v[x][1]);
        while(x<n)
        {
            if(temp.back()>=v[x][0])
            {
                int j=max(v[x][1],temp.back());
                temp.pop_back();
                temp.push_back(j);
                x++;
            }
            else
            {
                ans.push_back(temp);
                temp.clear();
                temp.push_back(v[x][0]);
                temp.push_back(v[x][1]);
                x++;
            }
        }
      if(!temp.empty())  ans.push_back(temp);
        
        return ans;
    }
};