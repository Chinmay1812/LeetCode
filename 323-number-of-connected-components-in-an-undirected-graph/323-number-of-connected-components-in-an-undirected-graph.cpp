class Solution {
public:
    


int parent[100001];
int Sizes[100001];

void make(int v)
{
    parent[v] = v;
    Sizes[v] = 1;
}

int find(int v)
{
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = find(parent[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (Sizes[a] < Sizes[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        Sizes[a] += Sizes[b];
    }


}

    int countComponents(int n, vector<vector<int>>&v) 
    {
        for(int i=0;i<n;i++)
            make(i);
        
        for(int i=0;i<v.size();i++)
        {
            int a=v[i][0],b=v[i][1];
            Union(a,b);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=parent[i]==i;
        }
        return ans;
    }
};