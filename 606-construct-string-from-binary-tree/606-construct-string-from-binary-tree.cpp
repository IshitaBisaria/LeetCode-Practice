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
    string func(TreeNode* root) {
        if(root == NULL)
            return "";
        string x = to_string(root->val);
        string y = "";
        y += x;
        if(!root->left && !root->right)
            return y;
        // if(root->left) {
            y += '(';
            if(root->left)
                y += tree2str(root->left);
            y += ')';
        // }
        if(root->right) {
            y += '(';
            y += tree2str(root->right);
            y += ')';
        }
        cout << y << endl;
        return y;
    }
    string tree2str(TreeNode* root) {
        string ans = "";
        ans += func(root);
        cout << ans << endl;
        return ans;
    }
};