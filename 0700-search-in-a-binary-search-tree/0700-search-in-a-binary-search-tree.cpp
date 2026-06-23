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

    void searchNode(TreeNode* root,TreeNode* &valNode,int val){
        if(root == NULL) return;

        if(root -> val == val){
            valNode = root;
            return;
        }

        if(val < root -> val) searchNode(root -> left,valNode,val);
        else if(val > root -> val) searchNode(root -> right,valNode,val);
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* valNode = NULL;
        if(root == NULL) return valNode;
        
        if(val > root -> val) searchNode(root -> right,valNode,val);
        else if(val < root -> val) searchNode(root -> left,valNode,val);
        else return root;

        return valNode;

    }
};