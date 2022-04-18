class Solution {
public:
    vector<int> intersection(vector<int>&v1, vector<int>&v2) 
    {
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int i=0,j=0;
        int n1=v1.size(),n2=v2.size();
        vector<int> ans;
        while(i<n1 && j<n2)
        {
            if(i<n1 && j<n2 &&v1[i]>v2[j])
            {
                while(j<n2 && v1[i]>v2[j])
                {
                    j++;
                }
            }
             if(i<n1 && j<n2 &&v1[i]<v2[j])
            {
                while(i<n1 && v1[i]<v2[j])
                {
                    i++;
                }
            }
            if( i<n1 && j<n2 && v1[i]==v2[j])
            {
                ans.push_back(v1[i]);
                i++;
                j++;
                while(i<n1 && v1[i]==v1[i-1])
                {
                    i++;
                }
                while(j<n2 && v2[j]==v2[j-1])
                {
                    j++;
                }
            }
        }
        return ans;
    }
};