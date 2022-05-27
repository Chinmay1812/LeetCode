class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>&ve) 
    {
        if(n==1) return {0};
        vector<int> v[n];
        for(auto &x:ve)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        vector<int> leaves;
        vector<int> deg(n,0);
        for(int i=0;i<n;i++)
        {
            if(v[i].size()==1)
            {
                leaves.push_back(i);
            }
            deg[i]=v[i].size();
        }
        
        while(n>2)
        {
            vector<int> node;
            for(auto &x:leaves)
            {
                for(auto &y:v[x])
                {
                    if(--deg[y]==1)
                    {
                        node.push_back(y);
                    }
                }
            }
            n-=leaves.size();
            leaves=node;
        }
        
       return leaves;
    }
};