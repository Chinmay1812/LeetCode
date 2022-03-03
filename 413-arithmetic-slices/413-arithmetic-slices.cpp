class Solution {
public:
    int numberOfArithmeticSlices(vector<int>&v) 
    {
        int n=v.size();
        int ans=0;
        for(int i=0;i+2<n;i++)
        {
            int d=v[i+1]-v[i];
            for(int j=i+2;j<n;j++)
            {
                if(v[j]-v[j-1]==d)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
            
        }
        return ans;
        
    }
};