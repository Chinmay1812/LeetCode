class Solution {
public:
    unordered_map<string,int> m;
    unordered_map<int,bool> dp;
    
    bool kunthal(string &s,int id)
    {   
        if(s.size()==id)
        {
            return true;
        }
        if(dp.find(id)!=dp.end())
        {
            return dp[id];
        }
        
        int n=s.size();
        string temp="";
        for(int i=id;i<n;i++)
        {
            temp+=s[i];
            if(m.find(temp)!=m.end() && kunthal(s,i+1))
            {
                 return dp[i]=true;
            }      
        }
        
        return dp[id]=false;
    }
    
    bool wordBreak(string s, vector<string>&v) 
    {
        int n=v.size();
        for(auto &x:v)
        {
            m[x]++;
        }
        return kunthal(s,0);
    }
};