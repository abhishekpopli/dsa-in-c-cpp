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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head -> next == NULL)
            return head;
        return groupOddEvenNodes(head);
    }

    ListNode* groupOddEvenNodes(ListNode* head) {
        ListNode *oddHead = head, *evenHead = head->next;
        ListNode *oddTail = head, *evenTail = head->next, *temp = head->next->next;
        int pointerIndex = 1;
        while(temp != NULL ) {
            if(pointerIndex%2) {
                oddTail -> next = temp;
                oddTail = temp;
            } else {
                evenTail -> next = temp;
                evenTail = temp;
            }
            temp = temp ->next;
            pointerIndex++;
        }
        evenTail->next=NULL;
        oddTail->next = evenHead;
        return oddHead;
    }
};