class Solution {
public:
    int triangularSum(vector<int>&v) 
    {
        int n=v.size();
        vector<int> temp2,temp1;
        temp1=v;
        if(n==1)
        {
            return v[0];
        }
      
        while(n!=1)
        {
            temp2=temp1;
            temp1.clear();
            n=temp2.size();
            for(int i=0;i<n-1;i++)
            {
                temp1.push_back((temp2[i]+temp2[i+1])%10);
            }
            
        }
        return temp2[0];
        
    }
};