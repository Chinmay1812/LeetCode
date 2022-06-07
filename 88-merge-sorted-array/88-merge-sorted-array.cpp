class Solution {
public:
    void merge(vector<int>& v1, int n, vector<int>& v2, int m) 
    {
        vector<int> v;
        int i=0,j=0;
        while(i<n&& j<m)
        {
            if(v1[i]<v2[j])
            {
                v.push_back(v1[i++]);
            }
            else
            {
                v.push_back(v2[j++]);
            }
        }
        while(i<n)
        {
            v.push_back(v1[i++]);
        }
        while(j<m)
        {
             v.push_back(v2[j++]);
        }
       v1=v;
    }
};