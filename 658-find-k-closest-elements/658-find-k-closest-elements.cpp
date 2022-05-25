class Solution {
public:
    vector<int> findClosestElements(vector<int>&v, int k, int x) 
    {
      stable_sort(v.begin(),v.end(),[x](int a,int b){
          return abs(a-x)<abs(b-x);
      });
      v.resize(k);
      sort(v.begin(),v.end());
      return v;  
    }
};