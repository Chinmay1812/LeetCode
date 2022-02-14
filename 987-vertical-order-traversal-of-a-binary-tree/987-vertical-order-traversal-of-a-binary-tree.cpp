/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        if(!root)
        {
            return ans;
        }
        
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        int x=0,y=0;
        map<int,map<int,multiset<int>>> m;
        int mn=INT_MAX,mx=INT_MIN;
        while(!q.empty())
        {
            auto node=q.front().first;
            x=q.front().second.first;
            y=q.front().second.second;
            mn=min(x,mn);
            mx=max(x,mx);
            // m[x].first=x;
            // m[x].first=y;
            // m[x].second.push_back(node->val);
            m[x][y].insert(node->val);
            
            q.pop();
            if(node->left)
            {
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right)
            {
                q.push({node->right,{x+1,y+1}});
            }
        }
    
//     for(int i=mn;i<=mx;i++)
//     {
//         vector<int> temp;
//         if(m[i].first==i && m[i].second.size())
//         {
//             sort(m[i].second.begin(),m[i].second.end());
//             for(auto x:m[i].second)
//             {
//                 temp.push_back(x);
//             }
//         }
//         else if(m[i].second.size())
//         {
//             for(auto x:m[i].second)
//             {
//                 temp.push_back(x);
//             }
            
//         }
        
//         if(temp.size())
//         {
//             ans.push_back(temp);
//         }
//     }
        for (auto p : m) {
            vector<int> col;
            for (auto q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        
    return ans;
    }
};