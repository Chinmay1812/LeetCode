class Solution {
public:
    vector<int> plusOne(vector<int>&v) 
    {
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==9)
            {
                v[i]=0;
            }
            else
            {
                v[i]++;
                return v;
            }
        }
        v[0]=1;
        v.push_back(0);
        return v;
    }
};