class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int> m;
        string st;
        for(auto x:s)
        {
            if(m[x]==0)
            {
                st+=x;
            }
            m[x]++;
        }
        string ans="";
        priority_queue<pair<int,char>> q;
        for(auto x:st)
        {
            q.push({m[x],x});
        }
        while(!q.empty())
        {
            auto k=q.top().first;
            auto ch=q.top().second;
            q.pop();
            for(int i=0;i<k;i++)
            {
                ans+=ch;
            }
        }
        return ans;
    }
};