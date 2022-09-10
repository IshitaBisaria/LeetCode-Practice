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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ans = new ListNode(0);
        ListNode* t = ans;
        ListNode* temp = head;
        int sum = 0;
        while(temp != NULL) {
            if(temp->val == 0) {
                t->next = new ListNode(sum);
                t = t->next;
                sum = 0;
            }
            else {
                sum += temp->val;
            }
            temp = temp->next;
        }
        return ans->next->next;
    }
};