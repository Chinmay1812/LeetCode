class Solution {
public:
    bool isPalindrome(int p) {
        string s=to_string(p);
        int x=0,y=s.size()-1;
        while(x<y)
        {
            if(s[x++]!=s[y--])
            {
                return 0;
            }
        }
        return 1;
    }
};