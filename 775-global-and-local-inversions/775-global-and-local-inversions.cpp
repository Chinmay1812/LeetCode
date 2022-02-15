class Solution {
public:
    bool isIdealPermutation(vector<int>&v) 
    {
        int n=v.size();
        bool ans=true;
        int mn=v[n-1];
        for(int i=n-1;i>=2;i--)
        {
            mn=min(mn,v[i]);
            if(mn<v[i-2])
            {
                ans=false;
                break;
            }
            
        }
        return ans;
    }
};