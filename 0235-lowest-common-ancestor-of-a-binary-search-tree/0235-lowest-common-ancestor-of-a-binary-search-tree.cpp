/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // method - 1 using recursion 
        if(root -> val < p -> val && root -> val < q -> val) return lowestCommonAncestor(root -> right,p,q);
        else if (root -> val > p -> val && root -> val > q -> val) return lowestCommonAncestor(root -> left,p,q);
        else return root;


        // method -2 without recursion
        /**

        while(root != NULL){
            if(root -> val < p -> val && root -> val < q -> val) root = root -> right;
            else if(root -> val > p -> val && root -> val > q -> val) root = root -> left;
            else return root;
        }
        
        */

    }
};