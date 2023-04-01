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
    void check(TreeNode* root,int t,int sum,int &f)
    {
        if (root==NULL)
            return ;
        if (root->left==NULL && root->right==NULL && t==sum+root->val)
            f=1;
        check(root->left,t,sum+root->val,f);
        check(root->right,t,sum+root->val,f);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0,f=0;
        check(root,targetSum,sum,f);
        return f;
    }
};