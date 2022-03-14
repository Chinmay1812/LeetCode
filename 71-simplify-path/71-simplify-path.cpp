class Solution {
public:
    string simplifyPath(string s) 
    {
       int n = s.length();
  vector<string> v;
  for(int i=0;i<n;i++)
  {
    string temp="";
      while(i<n && s[i]!='/')
      {
          temp+=s[i++];
      }
      if(temp=="." || temp.empty())
      {
          continue;
      }
      else if(temp=="..")
      {
          if(v.size())
          {
              v.pop_back();
          }
      }
      else
      {
          v.push_back(temp);
      }

  }
  if(v.empty())
  {
      return "/";
  }
  string ans="";
  for(int i=0;i<v.size();i++)
  {
      ans+="/"+v[i];
  }
   
    return ans;
    }
};