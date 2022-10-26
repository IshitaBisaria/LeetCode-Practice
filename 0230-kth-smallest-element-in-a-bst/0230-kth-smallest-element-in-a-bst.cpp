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
    int kSmall(TreeNode* root, int &k, int &ans) {
        if(root->left)
            kSmall(root->left, k, ans);
        k--;
        if(k == 0) {
            ans = root->val;
            return ans;
        }
        if(root->right)
            kSmall(root->right, k, ans);
        return ans;
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = INT_MAX;
        return kSmall(root, k, ans);
    }
};