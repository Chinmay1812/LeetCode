class Solution {
public:
    vector<int> ans;
    
    bool fun(string &s,int ind)
    {
      if(s.size()==ind && ans.size()>2)
      {
          return true;
      }
     long long num=0;
      for(int i=ind;i<s.size();i++)
      {
       
          num=10*num+s[i]-'0';
            if(num<0)
          {
              return false;
          }
            
          if(num>INT_MAX) return false;
        
          if(ans.size()<2 || (long long)ans.back()+(long long)ans[ans.size()-2]==num)
          {
              ans.push_back(num);
              if(fun(s,i+1))
              {
                  return true;
              }
              ans.pop_back();
          }
          if(i==ind && s[i]=='0')
          {
              return false;
          }
      }
        return false;
    }
    
    vector<int> splitIntoFibonacci(string s) 
    {
        fun(s,0);
        return ans;
    }
};