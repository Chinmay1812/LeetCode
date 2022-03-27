class Solution {
public:
    void wiggleSort(vector<int>&v) 
    {
        int n=v.size();
        vector<int> temp=v;
        sort(temp.begin(),temp.end());
        int x=0;
        int y=n-1;
        int c=0;
        while(x<n)
        {
            if(x%2)
            {
                v[x++]=temp[y--];
            }
            else
            {
                v[x++]=temp[c++];
            }
        }
        
    }
};