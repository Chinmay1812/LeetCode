class Solution
{
    public:
        int wiggleMaxLength(vector<int> &v)
        {
            int n = v.size();
            int ans = 0;
            if (n == 1)
            {
                return 1;
            }
            int i = 0;
            while (i < n - 1)
            {
                if (v[i + 1] > v[i])
                {
                    ans++;

                    while (i < n - 1 && v[i + 1] >= v[i])
                    {
                        i++;
                    }
                }
                else if (v[i + 1] < v[i])
                {
                    ans++;

                    while (i < n - 1 && v[i + 1] <= v[i])
                    {
                        i++;
                    }
                }
                else
                {
                    i++;
                }
            }

            return ans + 1;
        }
};