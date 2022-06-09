class Solution {
public:
    vector<int> twoSum(vector<int>&v, int k) 
    {
        int n=v.size();
        vector<int> ans;
        int left=0,right=n-1;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            int sum=v[left]+v[right];
            
            if(sum==k)
            {
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            else if(sum<k)
            {
                if(v[mid]+v[right]<k)
                {
                    left=mid;
                }
                else
                {
                    left++;
                }
            }
            else if(sum>k)
            {
                if(v[left]+v[mid]>k)
                {
                    right=mid;
                }
                else
                {
                    right=right-1;
                }
                
            }
        
            
        }
      return ans;
    }
};