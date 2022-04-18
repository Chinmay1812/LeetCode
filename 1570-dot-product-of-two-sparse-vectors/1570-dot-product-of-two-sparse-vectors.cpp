class SparseVector {
public:
    vector<pair<int,int> > v;
    SparseVector(vector<int> &v1) 
    {
        int n=v1.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({i,v1[i]});
        }
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& v1) 
    {
        int ans=0;
        int i=0,j=0;
        while(i<v.size() && j<v1.v.size())
        {
            int x=v[i].first;
            int y=v1.v[j].first;
            int p=v[i].second;
            int q=v1.v[j].second;
            if(x==y)
            {
                ans+=p*q;
                i++;j++;
            }
            else 
            {
                if(x<y)
                {
                    i++;
                }
                else
                {
                    j++;
                }
            }
            
        }
        return ans;
        
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);