class Solution {
public:
    int minDeletion(vector<int>&v) 
    {
        int n=v.size();
        vector<int> temp;
        temp.push_back(v[0]);
        int x=1;
        for(int i=1;i<n;i++)
        {
           
                if(temp.back()!=v[i] && (x-1)%2==0)
                {
                     temp.push_back(v[i]);
                     x++;
                }
                else if((x-1)%2!=0)
                {
                    temp.push_back(v[i]);
                     x++;
                }
                
            
        }
        if(temp.size()%2!=0)
        {
            temp.pop_back();
        }
        
        int ans=n-temp.size();
        return ans;
    }
};