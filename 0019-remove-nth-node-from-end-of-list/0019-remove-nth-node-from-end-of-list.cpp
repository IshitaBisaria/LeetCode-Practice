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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head->next == NULL)
            return NULL;
        ListNode* start = new ListNode(0);
        start->next = head;
        ListNode* slow = start;
        ListNode* fast = start;
        for(int i = 1; i <= n; i++) {
            fast = fast->next;
        }
        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* temp = slow->next;
        slow->next = temp->next;
        delete temp;
        return start->next;
    }
};