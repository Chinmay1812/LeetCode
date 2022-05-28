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
    unordered_map<TreeNode*,int> m;
    int h(TreeNode* root)
    {
        if(root==NULL) return 0;
        if(m[root])
        {
            return m[root];
        }
        
        int var=1+max(h(root->left),h(root->right));
        m[root]=var;
        return var;
    }
    
    
    int diameterOfBinaryTree(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int a=h(root->left)+h(root->right);
        int b=diameterOfBinaryTree(root->left);
        int c=diameterOfBinaryTree(root->right);
        return max({a,b,c});
    }
};