class Solution {
public:
    bool search(vector<int>&v, int k) 
    {
        for(int x:v)
        {
            if(x==k)
            {
                return 1;
            }
        }
            
        return 0;
    }
};