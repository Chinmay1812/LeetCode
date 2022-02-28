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
    bool isValidBST(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        stack<TreeNode*> s;
        TreeNode* prev=NULL;
        while(!s.empty() || root)
        {
            while(root!=NULL)
            {
                s.push(root);
                root=root->left;
            }
            root=s.top();
            s.pop();
            
            if(prev!=NULL && root->val<=prev->val)
            {
                return 0;
            }
            prev=root;
            root=root->right;
        }
        return 1;
    }
};