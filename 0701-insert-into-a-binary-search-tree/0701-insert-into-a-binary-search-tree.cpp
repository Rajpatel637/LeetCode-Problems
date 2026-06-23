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
    void insertBST(TreeNode*& root,int val){
        if(root == NULL){
            root = new TreeNode(val);
            return;
        }

        if(val < root -> val) insertBST(root -> left,val);
        else if(val > root -> val) insertBST(root -> right,val);
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
         
        if(root == NULL) return root = new TreeNode(val);

        if(val > root -> val) insertBST(root -> right,val);
        else if(val < root -> val) insertBST(root -> left,val);
        

        return root;
    }
};