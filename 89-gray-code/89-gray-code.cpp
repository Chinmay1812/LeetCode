class Solution
{
    public:

        void fun(int n, vector<string> &v)
        {
            if (n == 1)
            {
                v.push_back("0");
                v.push_back("1");
                return;
            }
            fun(n - 1, v);
            int x = v.size();
            for (int i = 0; i < x; i++)
            {
                v.push_back(v[x - i - 1]);
            }
            for (int i = 0; i < x; i++)
            {
                v[i] = "0" + v[i];
            }
            for (int i = v.size() - 1; i >= x; i--)
            {
                v[i] = "1" + v[i];
            }
        }
    int toint(string s)
    {
        int n = s.size();
        reverse(s.begin(), s.end());
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            val += pow(2, i) *(s[i] - '0');
        }
        return val;
    }

    vector<int> grayCode(int n)
    {
        vector<string> v;
        fun(n, v);
        vector<int> ans;
        for (int i = 0; i < v.size(); i++)
        {
            ans.push_back(toint(v[i]));
        }
        return ans;
    }
};