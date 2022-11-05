/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if(root)
            q.push(root);
        while(!q.empty()) {
            int n = q.size();
            vector<Node*> v;
            while(n--) {
                Node* curr = q.front();
                q.pop();
                v.push_back(curr);
                    if(curr->left)
                        q.push(curr->left);
                    if(curr->right)
                        q.push(curr->right);
            }
            v[v.size()-1]->next = NULL;
            for(int i = 0; i < v.size()-1; i++) {
                v[i]->next = v[i+1];
            }
        }
        return root;
    }
};
