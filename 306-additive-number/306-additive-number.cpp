class Solution {
public:
    
    vector<long long> v;
    
    bool fun(string &s,int ind)
    {
       
      if(s.size()==ind && v.size()>2)
      {
          return true;
      }
      long long num=0;
      for(int i=ind;i<s.size();i++)
      {
          num=s[i]-'0'+10*num;
          if(num<0 || num>1e18)
          {
              return false;
          }
          if(v.size()<2 || v.back()+v[v.size()-2]==num)
          {
              v.push_back(num);
              if(fun(s,i+1))
              {
                  return true;
              }
              v.pop_back();
          }
          if(i==ind && s[i]=='0')
          {
              return false;
          }
      }
        return false;
    }
    
    bool isAdditiveNumber(string s) 
    {
        if(fun(s,0))
        {
            return true;
        }
        return false;
    }
};