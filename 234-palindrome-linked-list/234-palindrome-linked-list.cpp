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
    ListNode* reverse(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = curr->next;
        while(curr != NULL && next != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* rev = reverse(slow);
        ListNode* temp = head;
        while(rev != NULL) {
            if(temp->val != rev->val)
                return false;
            temp = temp->next;
            rev = rev->next;
        }
        return true;
    }
};