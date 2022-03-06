class Solution {
public:
    long long minimalKSum(vector<int>&v, int k) 
    {
        sort(v.begin(),v.end());
        long long sum=0;
        long long prev;
    
        for(int i=0;i<v.size()&&k>0;i++)
        {
            long long cur=v[i];
            prev=(i==0?0:v[i-1]);
            long long cnt=cur-prev-1;
            long long j=min((long long)k,max((long long)0,cnt));
            k-=j;
            long long x=prev+j;
            long long y=prev;
            sum+=(x*(x+1))/2- y*(y+1)/2;
        }
       
        if(k>0)
        {
            prev=v[v.size()-1];
            long long x=prev+k;
            long long y=prev;
            sum+=(x*(x+1))/2- y*(y+1)/2;
     
        }
        // cout<<k<<endl;
        return sum;
    }
};