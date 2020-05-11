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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0;
        ListNode* t1=headA,*t2 = headB;
        while(t1){
            t1 = t1->next;
            l1++;
        }
        while(t2){
            t2 = t2->next;
            l2++;
        }
        int diff = abs(l1-l2);
        if(l2>l1) swap(headA,headB);
        while(diff--){
            headA = headA->next;
        }
        while(headA!=headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};