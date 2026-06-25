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
    
    ListNode* getTail(ListNode* list){
        
        ListNode* temp = list;


        while(temp -> next != NULL){
            temp = temp -> next;
        }
        return temp;
    }

    ListNode* findNode(ListNode* list,int a){
        int cnt = 0;
        ListNode* ans = NULL;

        ListNode* temp = list;

        while(temp != NULL){
            if(cnt == a){
               ans = temp;
            }
            cnt++;
            temp = temp -> next;
        }

        return ans; 
    }

    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* node2Tail = getTail(list2);
        ListNode* node1 = findNode(list1,a-1);
        ListNode* node2 = findNode(list1,b+1);

        node1 -> next = list2;
        node2Tail -> next = node2 ;

        return list1; 
    }
};