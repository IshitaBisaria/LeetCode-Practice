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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list1;
        for(int i = 0; i < a-1; i++)
            t1 = t1->next;
        for(int i = 0; i < b; i++)
            t2 = t2->next;
        t1->next = list2;
        while(list2->next != NULL)
            list2 = list2->next;
        list2->next = t2->next;
        return list1;
        // ListNode* temp = list1;
        // ListNode* aPrev = NULL;
        // ListNode* aNode = NULL;
        // ListNode* bNode = NULL;
        // while(temp != NULL) {
        //     if(temp->val == a) {
        //         aNode = temp;
        //         break;
        //     } else {
        //         aPrev = temp;
        //     }
        //     temp = temp->next;
        // }
        // temp = list1;
        // ListNode* bNext = NULL;
        // while(temp != NULL) {
        //     if(temp->val == b) {
        //         bNext = temp;
        //         break;
        //     }
        //     temp = temp->next;
        // }
        // ListNode* first = aPrev;
        // ListNode* second = bNext->next;
        // bNext->next = NULL;
        // temp = list2;
        // first->next = list2;
        // while(temp->next != NULL) {
        //     temp = temp->next;
        // }
        // temp->next = second;
        // cout << first->next->val << endl;
        // cout << first->val << endl;
        // cout << bNext->val << endl;
        // cout << second->val << endl;
        // return list1;
    }
};