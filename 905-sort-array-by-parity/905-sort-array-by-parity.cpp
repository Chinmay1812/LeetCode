class Solution {
public:
    static bool cp(int a,int b)
    {
      return a%2<b%2;
    }
    
    vector<int> sortArrayByParity(vector<int>&v) 
    {
        sort(v.begin(),v.end(),cp);
        return v;
    }
};