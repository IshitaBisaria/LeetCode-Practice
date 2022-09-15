/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return head;
        Node* nHead = new Node(head->val);
        Node* temp = head->next;
        Node* curr = nHead;
        while(temp != NULL) {
            curr->next = new Node(temp->val);
            curr = curr->next;
            temp = temp->next;
        }
        // Node* r = nHead;
        // while(r != NULL) {
        //     cout << r->val << " ";
        //     r = r->next;
        // }
        unordered_map<Node*, Node*> mp;
        temp = head, curr = nHead;
        while(temp != NULL) {
            mp.insert({temp, curr});
            temp = temp->next;
            curr = curr->next;
        }
        // for(auto x : mp) {
        //     cout << x.first->val << " " << x.second->val << endl;
        // }
        temp = head;
        while(temp != NULL) {
            Node* t = mp[temp];
            t->random = mp[temp->random];
            temp = temp->next;
        }
        return nHead;
    }
};