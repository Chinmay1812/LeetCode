#define ll long long
class ATM {
public:
    vector<int> v{20,50,100,200,500};
    unordered_map<ll,ll> m;
    ATM() {
        
    }
    
    void deposit(vector<int> g) 
    {
        for(int i=0;i<5;i++)
        {
            m[v[i]]+=g[i];
        }
    }
    
    vector<int> withdraw(int val) 
    {
        unordered_map<ll,ll> reset=m;
        unordered_map<ll,ll> mp;
        for(auto x:{500,200,100,50,20})
        {
            ll lo=1,hi=m[x];
            ll ans=0;
            while(lo<=hi)
            {
                ll mid=lo+(hi-lo)/2;
                if(val-mid*x>=0)
                {
                    ans=mid;
                    lo=mid+1;
                }
                else
                {
                    hi=mid-1;
                }
            }
            mp[x]+=ans;
            val-=ans*x;
            m[x]-=ans;
        }
        
        if(val==0)
        {
            vector<int> ans(5,0);
            int c=0;
            for(auto x:v)
            {
                ans[c++]+=mp[x];
            }
            return ans;
        }
        else
        {
            m=reset;
          
        }
          return {-1};
        
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */