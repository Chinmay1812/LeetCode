class Solution
{
    public:
        int largestRectangleArea(vector<int> &v)
        {
            int n = v.size();
            int ans = v[0];
            stack<int> s;
            s.push(-1);

            for (int i = 0; i < n; i++)
            {
                int x = v[i];
                while (s.top() != -1 && v[s.top()] > x)
                {
                    int ht = v[s.top()];
                    s.pop();
                    int wd = i - s.top() - 1;
                    ans = max(ans, ht *wd);
                }
                s.push(i);
            }
            int i = s.size();
            i--;
            while (s.top() != -1)
            {
                int ht = v[s.top()];
                s.pop();
                int wd = v.size() - s.top() - 1;
                ans = max(ans, ht *wd);
            }

            return ans;
        }
};