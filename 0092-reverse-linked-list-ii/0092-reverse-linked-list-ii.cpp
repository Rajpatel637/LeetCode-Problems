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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* firstIndex = nullptr;
        ListNode* lastIndex = nullptr;

        for (int i = 1; i < left; i++)
            prev = prev->next;
        int cnt = 0;
        firstIndex = prev;
        lastIndex = prev->next;
        ListNode* curr = lastIndex -> next;
        prev = lastIndex;

        while (cnt < (right - left)) {
            ListNode* nex = curr -> next;
            curr->next = prev;
            prev = curr;
            curr = nex;
            cnt++;
        }

        firstIndex->next = prev;
        lastIndex->next = curr;

        return dummy.next;
    }
};