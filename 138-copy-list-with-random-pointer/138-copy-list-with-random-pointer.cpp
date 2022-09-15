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
        Node* curr = head;
        Node* next = NULL;
        int i = 0;
        while(curr != NULL) {
            next = curr->next;
            Node* temp = new Node(curr->val);
            curr->next = temp;
            temp->next = next;
            curr = next;
        }
        curr = head;
        while(curr != NULL) {
            if(curr->random != NULL) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node* nHead = new Node(0);
        Node* copy, *copyItr = nHead;
        while(curr != NULL) {
            next = curr->next->next;
            copy = curr->next;
            copyItr->next = copy;
            copyItr = copy;
            curr->next = next;
            curr = next;
        }
        return nHead->next;
        // if(head == NULL)
        //     return head;
        // Node* nHead = new Node(head->val);
        // Node* temp = head->next;
        // Node* curr = nHead;
        // while(temp != NULL) {
        //     curr->next = new Node(temp->val);
        //     curr = curr->next;
        //     temp = temp->next;
        // }
        // // Node* r = nHead;
        // // while(r != NULL) {
        // //     cout << r->val << " ";
        // //     r = r->next;
        // // }
        // unordered_map<Node*, Node*> mp;
        // temp = head, curr = nHead;
        // while(temp != NULL) {
        //     mp.insert({temp, curr});
        //     temp = temp->next;
        //     curr = curr->next;
        // }
        // // for(auto x : mp) {
        // //     cout << x.first->val << " " << x.second->val << endl;
        // // }
        // temp = head;
        // while(temp != NULL) {
        //     Node* t = mp[temp];
        //     t->random = mp[temp->random];
        //     temp = temp->next;
        // }
        // return nHead;
    }
};