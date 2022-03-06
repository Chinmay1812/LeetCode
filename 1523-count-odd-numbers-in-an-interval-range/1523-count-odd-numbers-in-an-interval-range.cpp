class Solution {
public:
    int countOdds(int l, int h) 
    {
       int n=(h-l)/2;
        if(l%2==1 || h%2==1)
        {
            n++;
        }
        
        return n;
    }
};