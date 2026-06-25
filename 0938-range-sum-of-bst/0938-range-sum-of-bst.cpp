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
    void getRange(TreeNode* root, int low, int high,int &cnt){
        if(root == NULL) return;
        if(root -> val >= low && root -> val <= high){
            cnt = cnt + root -> val;
        }
        getRange(root -> left,low,high,cnt);
        getRange(root -> right,low,high,cnt);

    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int cnt = 0;

        getRange(root,low,high,cnt);

        return cnt;
    }
};