class ProductOfNumbers {
public:
    vector<long long> v={1};
    ProductOfNumbers() {
        
    }
    
    void add(int x)
    {
        if(x==0)
        {
            v={1};
        }
        else
        {
            v.push_back(v.back()*x);
        }
        
    }
    
    int getProduct(int k)
    {
        if(k>=v.size())
        {
            return 0;
        }
        int ans=v.back()/v[v.size()-1-k];
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */