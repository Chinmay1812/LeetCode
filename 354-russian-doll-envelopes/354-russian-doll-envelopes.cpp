class Solution {
public:
   static bool cp(vector<int> &a,vector<int> &b)
   {
        if(a[0]==b[0])
        {
            return a[1]>b[1];
        }
       return a[0]<b[0];
      
   }
    
    int maxEnvelopes(vector<vector<int>>&v) 
    {
        int c=1;
        int n=v.size();
        sort(v.begin(),v.end(),cp);
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            int x=v[i][0];
            int y=v[i][1];
            auto it=lower_bound(temp.begin(),temp.end(),y);
            if(it==temp.end())
            {
                temp.push_back(y);
            }
            else
            {
                *it=y;
            }  
        }
            return temp.size();
    }
};