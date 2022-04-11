class Solution
{
    public:

        bool dfs(int x, int p, vector<int> *v, bool *vis)
        {
            if (vis[x])
            {
                return true;
            }
            vis[x] = 1;

            for (auto z: v[x])
            {
                if (z != p && dfs(z, x, v, vis))
                {
                    return true;
                }
            }
            return false;
        }

    vector<int> findRedundantConnection(vector<vector < int>> &v1)
    {
        int n = v1.size();
        vector<int> v[n + 1];
        bool vis[1001] = { 0 };
        for (auto x: v1)
        {
            fill(begin(vis), end(vis), false);
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);

            if (dfs(x[0], -1, v, vis))
            {
                return x;
            }
        }
        return {};
    }
};