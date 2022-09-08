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
    int toDecimal(long long n) {
        // return 0;
        int i = 0;
        int ans = 0;
        while(n) {
            int t = n%10;
            n /= 10;
            ans += t*pow(2, i);
            i++;
        }
        return ans;
    }
    // int toDecimal(vector<int> num) {
    //     int number = 0;
    //     for(int i = num.size()-1; i >= 0; i--) {
    //         if(num[num.size()-i-1] == 1) {
    //             number += pow(2, i);}
    //     }
    //     return number;
    // }
    int getDecimalValue(ListNode* head) {
        // vector<int> num;
        int ans = 0;
        ListNode* temp = head;
        // while(temp != NULL) {
        //     // num.push_back(temp->val);
        //     num = num*10 + temp->val;
        //     temp = temp->next;
        // }
        ListNode* t = head;
        int l = 0;
        while(t != NULL) {
            l++;
            t = t->next;
        }
        int i = l-1;
        while(temp != NULL) {
            ans += temp->val*pow(2, i);
            temp = temp->next;
            i--;
        }
        return ans;
    }
};