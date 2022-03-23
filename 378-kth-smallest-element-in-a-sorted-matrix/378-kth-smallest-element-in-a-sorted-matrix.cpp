class Solution {
public:
    class three
    {
        public:
        int val,row,col;
        
    };
    
    class cmp
    {
        public:
        bool operator()(three a,three b)
        {
            return a.val>b.val;
        }
        
    };
    
    int kthSmallest(vector<vector<int>>&v, int k) 
    {
        int n=v.size();
        priority_queue<three,vector<three>,cmp> pq;
        for(int i=0;i<n;i++)
        {
            three num;
            num.val=v[i][0];
            num.row=i;
            num.col=0;
            pq.push(num);
        }
        
        while(k--)
        {
            if(k==0)
            {
                return pq.top().val;
            }
            three x=pq.top();
            pq.pop();
            int row=x.row;
            int col=x.col;
            if(col+1<n)
            {
                three num;
                num.val=v[row][col+1];
                num.row=row;
                num.col=col+1;
                pq.push(num);
            }
        }
        return 1;
    }
};