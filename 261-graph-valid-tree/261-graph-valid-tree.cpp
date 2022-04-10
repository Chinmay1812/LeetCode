class Solution
{
    public:
    int rank[2001] = { 0 };
    int parent[2001] = { 0 };
    int c;
    void make(int v)
    {
        c = v;
        for (int i = 0; i < v; i++)
        {
            parent[i] = i;
        }
    }

    int findparent(int n)
    {
        if (parent[n] == n)
        {
            return n;
        }
        return parent[n] = findparent(parent[n]);
    }

    void unions(int a, int b)
    {
        a = findparent(a);
        b = findparent(b);
        if (a != b)
        {
            if (rank[a] < rank[b])
            {
                parent[a] = parent[b];
            }
            else if (rank[a] > rank[b])
            {
                parent[b] = parent[a];
            }
            else
            {
                parent[b] = parent[a];
                rank[a]++;
            }
            c--;
        }
    }

    bool validTree(int n, vector<vector < int>> &v)
    {
        make(n);
        int edge = v.size();
        if (edge != n - 1)
        {
            return 0;
        }
        for (auto x: v)
        {
            unions(x[0], x[1]);
        }

        return c == 1;
    }
};