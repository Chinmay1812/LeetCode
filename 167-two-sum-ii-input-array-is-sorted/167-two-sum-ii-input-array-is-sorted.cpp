class Solution {
public:
    vector<int> twoSum(vector<int>&v, int k)
    {
        int n=v.size();
        int lo=0,hi=n-1;
        vector<int> ans;
        while(lo<hi)
        {
            int sum=v[lo]+v[hi];
            if(sum==k)
            {
                ans.push_back(lo+1);
                ans.push_back(hi+1);
                break;
            }
            else if(sum>k)
            {
                hi--;
            }
            else
            {
                lo++;
            }
 
        }
        return ans;
    }
};