class Solution {
public:
    int minMeetingRooms(vector<vector<int>>&v)
    {
        int n=v.size();
        map<int,int> m;
        for(auto x:v)
        {
            m[x[0]]++;
            m[x[1]]--;
        }
        int c=0;
        int ans=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            c+=it->second;
            ans=max(ans,c);
        }
        return ans;
    }
};