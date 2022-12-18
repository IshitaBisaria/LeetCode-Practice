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
    ListNode* reverse(ListNode* l) {
        ListNode* prev = NULL;
        ListNode* curr = l;
        ListNode* next = l->next;
        while(curr->next != NULL) {
            prev = curr;
            curr = next;
            next = curr->next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int carry = 0;
        while(t1 || t2) {
            int sum = carry + (t1? t1->val : 0) + (t2? t2->val : 0);
            carry = sum / 10;
            sum = sum % 10;
            temp->next = new ListNode(sum);
            temp = temp->next;
            if(t1)
                t1 = t1->next ? t1->next : NULL;
            if(t2)
                t2 = t2->next ? t2->next : NULL;
        }
        if(carry != 0)
            temp->next = new ListNode(carry);
        return ans->next;
    }
};