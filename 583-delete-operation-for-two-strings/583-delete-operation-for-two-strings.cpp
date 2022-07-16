class Solution
{
    public:
        int minDistance(string s, string g)
        {
            string temp = s;
            reverse(temp.begin(), temp.end());
            int n = s.size();
            int m = g.size();
            int dp[n + 1][m + 1];
            memset(dp, 0, sizeof(dp));

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    if (s[i - 1] == g[j - 1])
                    {
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                    }
                    else
                    {
                        dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                    }
                }
            }
            int ans = n - 2 *dp[n][m] + m;

            return ans;
        }
};