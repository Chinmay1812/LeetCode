class Solution {
public:
    int majorityElement(vector<int>&v) 
    {
        int c=0,y=0;
        for(auto x:v)
        {
            if(c==0)
            {
                y=x;
            }
            c+=(y==x)?1:-1;
        }
    
        return y;
    }
};