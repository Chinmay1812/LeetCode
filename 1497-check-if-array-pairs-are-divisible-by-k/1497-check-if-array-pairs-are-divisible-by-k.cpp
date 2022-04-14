class Solution {
public:
    bool canArrange(vector<int>&v, int k) 
    {
        int n=v.size();
        unordered_map<int,int> m;
        for(auto &x:v)
        { 
            m[(x%k +k)%k]++;
        }
        if(m[0]%2)
        {
            return 0;
        }
        int num=0;
    
        for(int i=1;i<k/2+1;i++)
        {
            if(m[i]!=m[k-i])
            {
                return 0;
            }
        
        }

        return 1;
    }
};