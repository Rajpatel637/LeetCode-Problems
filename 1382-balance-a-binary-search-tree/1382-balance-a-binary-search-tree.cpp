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
    
    void getInorder(TreeNode* root,vector<int>& ans){
        if(root == NULL) return;

        getInorder(root -> left,ans);
        ans.push_back(root -> val);
        getInorder(root -> right,ans);
    }

    TreeNode* getBalance(vector<int> ans,int s , int e){
        if(s > e) return NULL;

        int mid =  s + (e-s)/2;

        TreeNode* newRoot = new TreeNode(ans[mid]);

        newRoot -> left = getBalance(ans,s,mid-1);
        newRoot -> right = getBalance(ans,mid+1,e);
        return newRoot;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        getInorder(root,ans);

        return getBalance(ans,0,ans.size()-1);
    }
};