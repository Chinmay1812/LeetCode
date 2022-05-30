class Solution {
public:
    void reverseWords(vector<char>&s) 
    {
        int n=s.size();
        int x=0,y=n-1;
        while(x<y)
        {
            swap(s[x++],s[y--]);
        }
        
        for(int i=0;i<n;i++)
        {
            int x=i;
            while(i<n && s[i]!=' ')
            {
                i++;
            }
            reverse(s.begin()+x,s.begin()+i);
        }
    }
};