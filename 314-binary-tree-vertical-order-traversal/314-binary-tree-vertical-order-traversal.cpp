class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> verticalOrder(TreeNode* root) 
    {
        if(!root)
        {
            return ans;
        }
        
       
       queue<pair<TreeNode*,int>> q;
       map<int,vector<int>> m;
       q.push({root,0});
        int mn=INT_MAX,mx=INT_MIN;
       while(!q.empty())
       {
           auto node=q.front().first;
           int x=q.front().second;
           q.pop();
           mn=min(mn,x);
           mx=max(mx,x);
           m[x].push_back(node->val);
           if(node->left)
           {
               q.push({node->left,x-1});
           }
           if(node->right)
           {
               q.push({node->right,x+1});
           } 
       }
        for(int i=mn;i<=mx;i++)
        {
            vector<int> temp;
            if(m[i].size())
            {
                for(auto z:m[i])
                {
                    temp.push_back(z);
                }
            }
            if(temp.size())
            {
                ans.push_back(temp);
            }
        }
        
       return ans;
        
    }
};