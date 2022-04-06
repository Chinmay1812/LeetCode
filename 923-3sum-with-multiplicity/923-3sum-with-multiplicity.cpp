class Solution {
public:
    int threeSumMulti(vector<int>&v, int t) 
    {
        int n=v.size();
        int mod=1e9+7;
        unordered_map<int,int> m;
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            int sum=t-v[i];
            
            while(j<k)
            {
                int temp=v[j]+v[k];
                
                if(temp<sum)
                {
                    j++;
                }
                else if(temp>sum)
                {
                    k--;
                }
                else
                {
                    if(v[j]!=v[k])
                    {
                        int left=1;
                        int right=1;
                        
                        while(j+1<k && v[j]==v[j+1])
                        {
                            j++;
                            left++;
                        }
                        while(k-1>j && v[k]==v[k-1])
                        {
                            k--;
                            right++;
                        }
                        ans+=(left*right)%mod;
                        ans%=mod;
                        j++;
                        k--;
                    }
                    else
                    {
                        ans += (k-j+1) * (k-j) / 2;
                        ans %= mod;
                         break;
                        
                    }
                    
                    
                }
                
            }
            
        }
        
       return ans;
        
    }
};