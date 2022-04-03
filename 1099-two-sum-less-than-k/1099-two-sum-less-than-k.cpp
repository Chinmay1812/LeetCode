class Solution {
public:
   
    int twoSumLessThanK(vector<int>&b, int k) 
    {
       int n=b.size();
        vector<int> v;
       for(int i=0;i+1<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               v.push_back(b[i]+b[j]);
           }
       }
      sort(v.begin(),v.end());
      int lo=0,hi=v.size()-1;
        int ans=-1;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(v[mid]<k)
            {
                ans=v[mid];
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        return ans;
    }
};