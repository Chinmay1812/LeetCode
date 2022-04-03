class Solution {
public:
   
    int twoSumLessThanK(vector<int>&b, int k) 
    {
       int n=b.size();
        int ans=-1;
       for(int i=0;i+1<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(b[i]+b[j]<k && ans<b[i]+b[j])
               {
                   ans=b[i]+b[j];
               }
             
           }
       }
  return ans;
    }
};