#include <queue>

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

class compare{
    public:
        bool operator()(ListNode* a, ListNode* b){
            return a -> val > b -> val;
        }
};
 
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare> minHeap;
        vector<int> ans;
        ListNode* root = NULL;
        ListNode* prev = root;

        for(int i = 0 ; i < lists.size();i++){
            if(lists[i] != NULL){
                minHeap.push(lists[i]);
            }            
        }

        while(minHeap.size() > 0){
            ListNode* temp = minHeap.top();
            
            if(root == NULL){
                root = temp;
                
            }
            else{
                prev -> next = temp;   
            }
            prev = temp;
            
            minHeap.pop();
            
            if(temp -> next != NULL){
                minHeap.push(temp -> next);
            }
            
        }

        return root;
    
    }
};