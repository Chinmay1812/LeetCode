class Solution {
public:
    int minimumDeviation(vector<int>&v) 
    {
        priority_queue<int> q;
        int mn=INT_MAX;
        for(auto x:v)
        {
            if(x%2==0)
            {
                q.push(x);
                mn=min(mn,x);
            }
            else
            {
                q.push(x*2);
                mn=min(mn,x*2);
            }
        }
        int ans=INT_MAX;
        
        while(!q.empty())
        {
            int x=q.top();
            q.pop();
            ans=min(ans,x-mn);
            
            if(x%2==0)
            {
                x/=2;
                q.push(x);
                mn=min(mn,x);
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};