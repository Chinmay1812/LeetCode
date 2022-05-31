class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n=gas.size();
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=gas[i];
            sum2+=cost[i];
        }
        if(sum1<sum2)
        {
            return -1;
        }
        int ans=0,val=0;
        
        for(int i=0;i<n;i++)
        {
            val+=gas[i]-cost[i];
            if(val<0)
            {
                val=0;
                ans=i+1;
            }
        }
        
        return ans;
    }
};