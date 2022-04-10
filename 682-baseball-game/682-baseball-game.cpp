class Solution {
public:
    int calPoints(vector<string>&v1) 
    {
        int n=v1.size();
        vector<int> v;
        for(auto x:v1)
        {
            
            if(x!="C" && x!="+" && x!="D")
            {
                int z=stoi(x);
                v.push_back(z);
            }
            else if(x=="C")
            {
                v.pop_back();
            }
            else if(x=="D")
            {
                int z=v.back();
                v.push_back(2*z);
            }
            else
            {
                int sum=v[v.size()-1]+v[v.size()-2];
                v.push_back(sum);
            }
        }
        int ans=0;
        for(auto x:v)
        {
            ans+=x;
        }
        return ans;
    }
};