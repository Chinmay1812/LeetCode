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
    int kthSmallest(TreeNode* root, int k)
    {
        stack<TreeNode*> s;
        TreeNode* temp=root;
        while(1)
        {
            while(temp!=NULL)
            {
                s.push(temp);
                temp=temp->left;
            }
            auto node=s.top();
            s.pop();
            if(--k==0)
            {
                return node->val;
            }
            temp=node->right;
        }
        return 0;
    }
};