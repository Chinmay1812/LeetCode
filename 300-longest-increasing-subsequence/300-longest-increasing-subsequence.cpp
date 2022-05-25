class Solution {
public:
    int lengthOfLIS(vector<int>&v) 
    {
        int n=v.size();
        vector<int> temp;
        temp.push_back(v[0]);
        for(int x:v)
        {
            auto it=lower_bound(temp.begin(),temp.end(),x);
            if(it==temp.end())
            {
                temp.push_back(x);
            }
            else
            {
                *it=x;
            }
        }
       
        return temp.size();
    }
};