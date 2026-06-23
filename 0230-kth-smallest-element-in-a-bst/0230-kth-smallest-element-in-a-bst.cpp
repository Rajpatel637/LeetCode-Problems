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
    void getSolve(TreeNode* root,int k,int &i,TreeNode* &temp){
          if(root == NULL) return;

          getSolve(root -> left,k,i,temp);
          i++;
          if(i == k) temp = root;
          getSolve(root -> right,k,i,temp);
    }
 
    int kthSmallest(TreeNode* root, int k) {
        int i = 0;
        TreeNode* temp = NULL;

        getSolve(root,k,i,temp);

        // if(temp == NULL) return -1;
        return temp -> val;
    }
};