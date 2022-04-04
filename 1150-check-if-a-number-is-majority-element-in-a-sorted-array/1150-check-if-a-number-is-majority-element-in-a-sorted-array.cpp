class Solution {
public:
    bool isMajorityElement(vector<int>&v, int k) 
    {
       
        auto it=lower_bound(v.begin(),v.end(),k);
        auto jt=upper_bound(v.begin(),v.end(),k);
        
        int n=v.size();
        int freq=jt-it;
        if(freq>n/2)
        {
            return 1;
        }
       return 0;
        
    }
};