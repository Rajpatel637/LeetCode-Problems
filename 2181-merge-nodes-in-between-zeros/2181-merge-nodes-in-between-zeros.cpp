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
        int sum = 0;
        ListNode* temp = head -> next;
        ListNode* zeroIndex = head;

        while(temp != NULL){

            
            if(temp -> val == 0){
                zeroIndex -> val = sum;
                zeroIndex -> next = temp -> next;
                zeroIndex = temp -> next;
                sum = 0;
            }

            sum += temp -> val;

            temp = temp -> next;

        }

        return head;
            
    }
};