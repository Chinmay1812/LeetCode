class Solution {
public:
    
   void merge(vector<int>&v,int s,int mid,int e)    
   {
      int i=s;
      int j=mid;
      int temp[e-s+1]; 
      int x=0;
       while(i<mid && j<=e)
       {
           if(v[i]<=v[j])
           {
               temp[x++]=v[i++];
           }
           else
           {
               temp[x++]=v[j++];
           }
       }
    while(i<mid)
    {
        temp[x++]=v[i++];
    }
       while(j<=e)
       {
           temp[x++]=v[j++];
       }
       x=0;
       for(int i=s;i<=e;i++)
       {
           v[i]=temp[x++];
       }
    
   } 
    void merge_sort(vector<int>&v,int s,int e)
    {
        if(s>=e)
        {
            return;
        }
        int mid=s+(e-s)/2;
        merge_sort(v,s,mid);
        merge_sort(v,mid+1,e);
        merge(v,s,mid+1,e);
    }

    vector<int> sortArray(vector<int>&v) 
    {
        int n=v.size();
        merge_sort(v,0,n-1);
        return v;
    }
};