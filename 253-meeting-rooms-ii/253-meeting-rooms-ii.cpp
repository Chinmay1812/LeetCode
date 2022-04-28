class Solution {
public:
    int minMeetingRooms(vector<vector<int>>&v) 
    {
        int n=v.size();
        sort(v.begin(),v.end());
        priority_queue<int,vector<int>,greater<int> > pq;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x=v[i][0];
            int y=v[i][1];
            
            if(pq.empty()||x<pq.top())
            {
                pq.push(y);
            }
            else
            {
                pq.push(y);
                pq.pop();
            }
            int sz=pq.size();
            ans=max(ans,sz);
        }
        return ans;
    }
};