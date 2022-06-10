class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int n = s.size();
            unordered_map<char, int> m;
            int i = 0, j = 0;
            int ans = 0;

            while (i < n && j < n)
            {

                if (m[s[j]] == 0)
                {
                    m[s[j++]]++;
                    ans = max(ans, j - i);
                }
                else
                {
                    m[s[i++]]--;
                }
            }
            return ans;
        }
};