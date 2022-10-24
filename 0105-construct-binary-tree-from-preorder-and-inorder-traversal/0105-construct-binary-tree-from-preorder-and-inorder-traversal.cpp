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
    int search(vector<int>& arr, int s, int e, int data) {
        for(int i = s; i <= e; i++)
            if(arr[i] == data)
                return i;
        return -1;
    }
    TreeNode* build(vector<int>& pre, vector<int>& in, int s, int e, int& pi) {
        if(s > e)
            return NULL;
        TreeNode* temp = new TreeNode(pre[pi++]);
        if(s == e)
            return temp;
        int index = search(in, s, e, temp->val);
        temp->left = build(pre, in, s, index-1, pi);
        temp->right = build(pre, in, index+1, e, pi);
        return temp;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size() == 1)
            return new TreeNode(preorder[0]);
        int e = preorder.size()-1;
        int s = 0, pi = 0;
        return build(preorder, inorder, s, e, pi);
    }
};