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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int getSize(ListNode* head){
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp -> next;
        }

        return cnt;

    }

    TreeNode* toBST(ListNode* &head,int size){
        if(size <= 0 || head == NULL) return NULL;
        
        TreeNode* left = toBST(head,size/2);

        TreeNode* root = new TreeNode(head->val);
        root -> left = left;

        head = head -> next;

        TreeNode* right = toBST(head,(size-(size/2)-1));

        root -> right = right;
        return root; 
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        int size = getSize(head);

        return toBST(head,size);

    
    }
};