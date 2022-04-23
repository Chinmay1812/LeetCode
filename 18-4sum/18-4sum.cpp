class Solution {
public:
    vector<vector<int>> fourSum(vector<int>&v, int k) 
    {
        int n=v.size();
        if(n<4)
        {
            return {};
        }
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++)
        {
            while(i>0 && i<n && v[i]==v[i-1])
            {
                i++;
            }
            if(i>=n-3)
            {
                break;
            }
            
           if((long long)v[i]+v[i+1]+v[i+2]+v[i+3]>k)
           {
               break;
           }
           if((long long)v[i]+v[n-1]+v[n-2]+v[n-3]<k)
           {
               continue;
           }   
           for(int j=i+1;j<n-2;j++) 
           {
              while(j>i+1 && j<n && v[j]==v[j-1])
              {
                  j++;
              }
               if(j>=n-2)
               {
                   break;
               }
              if((long long)v[i]+v[j]+v[j+1]+v[j+2]>k)
              {
                  break;
              }
              if((long long)v[i]+v[j]+v[n-1]+v[n-2]<k)
              {
                  continue;
              }
              int lo=j+1,hi=n-1;
               
              while(lo<hi)
              {
                  long long sum=v[i]+v[j]+v[lo]+v[hi];
                  if(sum<k)
                  {
                      lo++;
                  }
                  else if(sum>k)
                  {
                      hi--;
                  }
                  else
                  {
                      ans.push_back({v[i],v[j],v[lo],v[hi]});
                      lo++;
                      hi--;
                      while(lo<hi && v[lo-1]==v[lo])
                      {
                          lo++;
                      }   
                      while(lo<hi && v[hi]==v[hi+1])
                      {
                          hi--;
                      }      
                  }
                  
              }
               
           }
        }
            return ans;
    }
};