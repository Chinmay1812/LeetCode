// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > ans;
    vector<int> temp;
    set<vector<int> > s;
    void fun(vector<int>&v,int k,int sum=0,int id=0)
    {
          if(sum>k)
          {
              return;
          }
          if(sum==k)
          {
             ans.push_back(temp);
              return;
          }
      
      for(int i=id;i<v.size();i++)
      {
        //   while(i<v.size() && i>id && v[i]==v[i-1])
        //   {
        //       i++;
        //   }
          temp.push_back(v[i]);
          fun(v,k,sum+v[i],i);        
          temp.pop_back();
      }
    
    }
    
    vector<vector<int> > combinationSum(vector<int> &v1, int k) 
    {
        sort(v1.begin(),v1.end());
        vector<int> v;
        int n=v1.size();
        v.push_back(v1[0]);
        for(int i=1;i<n;i++)
        {
            if(v.back()!=v1[i])
            {
                v.push_back(v1[i]);
            }
        }
        fun(v,k);
        return ans;
        
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends