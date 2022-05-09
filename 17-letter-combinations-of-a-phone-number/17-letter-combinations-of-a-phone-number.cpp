class Solution {
public:
    vector<string> ans;
    string get(int n)
{
    if(n==2)
    {
        return "abc";
    }
    if(n==3)
    {
        return "def";
    }
    if(n==4)
    {
        return "ghi";
    }
    if(n==5)
    {
        return "jkl";
    }
    if(n==6)
    {
        return "mno";
    }
    if(n==7)
    {
        return "pqrs";
    }
    if(n==8)
    {
       return "tuv";
    }
    if(n==9)
    {
        return "wxyz";
    }
    return "";
}
    
    void fun(int n,string s="")
    {
        if(n==0)
        {
            ans.push_back(s);
            return;
        }
        int small=n%10;
        int rem=n/10;
        string var=get(small);
        
        for(int i=0;i<var.size();i++)
        {
            fun(rem,var[i]+s);    
        }

    }
    
    vector<string> letterCombinations(string s) 
    {
       int n=0;
        for(int i=0;i<s.size();i++)
        {
            n=n*10+s[i]-'0';
        }
        
       if(n!=0) {fun(n);
        sort(ans.begin(),ans.end());}
       return ans;      
    };
        
};