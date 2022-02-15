class Solution {
public:
    bool isIdealPermutation(vector<int>&v)
    {
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            if(abs(v[i]-i)>1)
            {
                return false;
            }
        }
        return true;
    }
};