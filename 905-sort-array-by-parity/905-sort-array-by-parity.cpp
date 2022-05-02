class Solution {
public:
    vector<int> sortArrayByParity(vector<int>&a) 
    {
        int lo=0,hi=a.size()-1;
        
        while(lo<=hi)
        {
            if(a[lo]%2>a[hi]%2)
            {
                swap(a[lo++],a[hi--]);
            }
            
            if(a[hi]%2==1)
            {
                hi--;
            }
            if(a[lo]%2==0)
            {
                lo++;
            }
        }
        
        return a;
    }
};