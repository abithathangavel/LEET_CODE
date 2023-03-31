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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if (root==NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty())
        {
            int a=q.size();
            while (a)
            {
                TreeNode* temp=q.front();
                q.pop();
                if (a==1)
                v.push_back(temp->val);
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
                a--;
            }
        }
        return v;
    }
};