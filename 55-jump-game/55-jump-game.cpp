class Solution {
public:
    bool canJump(vector<int>&v)
    {
        //n-i-1 needed from index i;
        int n=v.size();
        int far=0;
        for(int i=0;i<n;i++)
        {
            if(far<i)
            {
                return false;
            }
            far=max(far,i+v[i]);
        }
        return true;
    }
};