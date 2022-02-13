class Solution {
public:
    
    vector<vector<int>> ans;
    void fun(vector<int>&v,int i,vector<int> &temp)
    {
        if(i>=v.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(v[i]);
        fun(v,i+1,temp);
        temp.pop_back();
        fun(v,i+1,temp);
        
    }
    
    
    vector<vector<int>> subsets(vector<int>&v) 
    {
        vector<int> temp;
        fun(v,0,temp);
        return ans;
    }
};