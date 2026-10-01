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

private:

    int gcd(int a,int b){
        if( a >= b){
            while( b != 0){
                int temp = b;
                b = a % b;
                a = temp;
            }

            return a;
        }
        else{
            while( a != 0){
                int temp = a;
                a = b % a;
                b = temp;
            }

            return b;
        }

        return 0;
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;

        while(temp -> next != NULL){
            ListNode* nexty = temp -> next;
            ListNode* newNode = new ListNode(gcd(temp->val,nexty->val));
            newNode -> next = nexty;
            temp -> next = newNode;

            temp = nexty;
        }

        return head;
    }
};