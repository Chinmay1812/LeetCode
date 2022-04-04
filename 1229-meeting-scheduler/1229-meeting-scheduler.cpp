class Solution {
public:
    vector<int> minAvailableDuration(vector<vector<int>>&v1, vector<vector<int>>&v2, int k) 
    {
        int n1=v1.size();
        int n2=v2.size();
        int x=0,y=0;
        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        while(x<n1 and y<n2)
        {
            int start=max(v1[x][0],v2[y][0]);
            int end=min(v1[x][1],v2[y][1]);   
            if(end-start>=k)
            {
                return {start,start+k};
            }
            if(v1[x][1]<v2[y][1])
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        return {};
    }
};