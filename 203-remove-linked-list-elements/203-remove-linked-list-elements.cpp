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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        if(head == NULL)
            return NULL;
        if(head->next == NULL) {
            if(head->val == val) {
                delete head;
                return NULL;
            }
            else
                return head;
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        while(curr != NULL) {
            if(curr->val == val) {
                ListNode* temp = curr;
                curr = curr->next;
                prev->next = curr;
                delete temp;
            }
            else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};