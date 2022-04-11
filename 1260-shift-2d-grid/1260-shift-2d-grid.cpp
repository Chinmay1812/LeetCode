class Solution
{
    public:
        vector<vector < int>> shiftGrid(vector<vector < int>> &v, int k)
        {
            int mod = v.size()*v[0].size();
            int n = v.size();
            int m = v[0].size();
            k %= mod;
            vector<vector < int>> ans(n, vector<int> (m));

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    int newCol = (j + k) % m;
                    int x=(j+k)/m;
                    int newRow = (i +x) % n;
                    ans[newRow][newCol] = v[i][j];
                }
            }
            return ans;
        }
};