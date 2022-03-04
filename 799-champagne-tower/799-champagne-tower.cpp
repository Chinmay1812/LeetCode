class Solution {
public:
    double champagneTower(int k, int x, int y) 
    {
        double dp[101][101] = {0.0};
        dp[0][0] = k;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j <= i; j++) {
                if (dp[i][j] >= 1) {
                    dp[i + 1][j] += (dp[i][j] - 1) / 2.0;
                    dp[i + 1][j + 1] += (dp[i][j] - 1) / 2.0;
                    dp[i][j] = 1;
                }
            }
        }
        return dp[x][y];

        
        
    }
};