/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return NULL;
        
        ListNode* curr = head;
        ListNode* nx = head->next;
        
        if (nx == NULL) return head;
        
        ListNode* revSt = reverseList(nx);
        
        curr->next = NULL;
        nx->next = curr;
        return revSt;
    }
};
