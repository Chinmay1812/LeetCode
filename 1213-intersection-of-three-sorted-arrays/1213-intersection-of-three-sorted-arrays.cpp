class Solution {
public:
    vector<int> arraysIntersection(vector<int>&v1, vector<int>&v2, vector<int>&v3) 
    {
        int n1=v1.size();
        int n2=v2.size();
        int n3=v3.size();
        int x=0,y=0,z=0;
        vector<int> ans;
        while(x<n1 && y<n2 && z<n3)
        {
            if(v1[x]==v2[y] && v2[y]==v3[z])
            {
                ans.push_back(v1[x]);
            }
            int mn=min({v1[x],v2[y],v3[z]});
            if(v1[x]==mn)
            {
                x++;
            }
            if(v2[y]==mn)
            {
                y++;
            }
            if(v3[z]==mn)
            {
                z++;
            }   
        }
        return ans;
    }
};