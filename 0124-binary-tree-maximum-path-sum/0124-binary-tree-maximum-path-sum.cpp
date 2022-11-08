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
    int ans = INT_MIN;
    int maxPathDown(TreeNode* root) {
        if(root == NULL)
            return 0;
        int ls = max(0, maxPathDown(root->left));
        int rs = max(0, maxPathDown(root->right));
        int sum = root->val + ls + rs;
        ans = max(ans, sum);
        return root->val + max(ls, rs);
    }
    int maxPathSum(TreeNode* root) {
        maxPathDown(root);
        return ans;
    }
};