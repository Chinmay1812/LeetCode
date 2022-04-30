class Solution {
private:
    int n;
    vector<vector<string>> result;
    vector<string> path;
    vector<bool> dg, udg, col;
    
public:
    vector<vector<string>> solveNQueens(int _n) {
        n = _n;
        col = udg = dg = vector<bool>(n * 2);
        path = vector<string>(n, string(n, '.'));
        
        dfs(0);
        return result;
    }
    
    void dfs(int u) {
        if (u == n) {
            result.push_back(path);
            return;
        }
        
        for (int i = 0; i < n; i++) {
            if (!col[i] && !dg[u + i] && !udg[n + u - i]) {
                col[i] = dg[u + i] = udg[n + u - i] = true;
                path[u][i] = 'Q';
                dfs(u + 1);
                col[i] = dg[u + i] = udg[n + u - i] = false;
                path[u][i] = '.';
            }
        }
    }
};