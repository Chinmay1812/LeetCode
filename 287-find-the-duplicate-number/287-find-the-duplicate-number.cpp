class Solution {
public:
    int findDuplicate(vector<int>&v) 
    {
        while(v[0]!=v[v[0]])
        {
            swap(v[0],v[v[0]]);
        }
        return v[0];
    }
};