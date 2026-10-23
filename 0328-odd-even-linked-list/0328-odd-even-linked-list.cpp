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
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return head;
        ListNode* oddHead = head;
        ListNode* evenHead = head->next;

        ListNode* tempEven = evenHead;

        while (tempEven != NULL && tempEven->next != NULL) {
            oddHead->next = oddHead->next->next;
            tempEven->next = tempEven->next->next;

            oddHead = oddHead->next;
            tempEven = tempEven->next;
        }

        oddHead->next = evenHead;
        return head;
    }
};