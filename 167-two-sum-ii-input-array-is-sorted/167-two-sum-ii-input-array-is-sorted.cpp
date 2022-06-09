class Solution {
public:
    vector<int> twoSum(vector<int>&v, int k)
    {
        int n=v.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int sum=k-v[i];
            auto f=binary_search(v.begin(),v.end(),sum);
            if(f)
            {
                auto lb=lower_bound(v.begin()+i+1,v.end(),sum)-v.begin();
                ans.push_back(i+1);
                ans.push_back(lb+1);
                break;
            }
        }
        return ans;
    }
};