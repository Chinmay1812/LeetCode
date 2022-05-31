class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        string temp="";
        unordered_map<string,int> m;
        int n=s.size();
        if(k>n)
        {
            return 0;
        }
        for(int i=0;i<k;i++)
        {
            temp+=s[i];
        }
        m[temp]++;
        for(int i=k;i<n;i++)
        {
            temp.erase(temp.begin());
            temp+=s[i];
            m[temp]++;
        }
        int sz=m.size();
        int val=pow(2,k);
        return sz==val;
    }
};