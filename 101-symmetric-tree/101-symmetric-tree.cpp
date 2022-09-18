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
    bool func(TreeNode* left, TreeNode* right) {
        if(!left || !right)
            return left == right;
        if(left->val != right->val)
            return false;
        return func(left->left, right->right) && func(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return !root || func(root->left, root->right);
        // queue<TreeNode*> q;
        // q.push(root->left);
        // q.push(root->right);
        // while(!q.empty()) {
        //     TreeNode* curr1 = q.front();
        //     q.pop();
        //     TreeNode* curr2 = q.front();
        //     q.pop();
        //     if((curr1 && !curr2) || (curr2 && !curr1))
        //         return false;
        //     if(curr1 && curr2) {
        //         if(curr1->val != curr2->val)
        //             return false;
        //         q.push(curr1->left);
        //         q.push(curr2->right);
        //         q.push(curr1->right);
        //         q.push(curr2->left);
        //     }
        // }
        // return true;
    }
};