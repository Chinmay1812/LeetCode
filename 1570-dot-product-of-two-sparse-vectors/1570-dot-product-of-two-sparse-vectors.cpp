class SparseVector {
public:
    vector<int> v1;
    SparseVector(vector<int> &v) 
    {
     v1=v;   
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& v2) 
    {
        int ans=0;
        for(int i=0;i<v1.size();i++)
        {
            ans+=v1[i]*v2.v1[i];
        }
        return ans;
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);