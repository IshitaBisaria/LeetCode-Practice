/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* node1 = new ListNode(0);
        ListNode* node2 = new ListNode(0);
        ListNode* t1 = node1;
        ListNode* t2 = node2;
        while(head) {
            if(head->val < x) {
                t1->next = head;
                t1 = t1->next;
            } else {
                t2->next = head;
                t2 = t2->next;
            }
            head = head->next;
        }
        t2->next = NULL;
        t1->next = node2->next;
        return node1->next;
    }
};