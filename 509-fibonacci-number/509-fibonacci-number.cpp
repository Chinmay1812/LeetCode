class Solution {
public:
    unordered_map<int,int> m;
    int fib(int n) 
    {
        if(n==0)
        {
            return m[0]=0;
        }
        if(n==1)
        {
            return m[1]=1;
        }
        
        return m[n]=fib(n-1)+fib(n-2);
    }
};