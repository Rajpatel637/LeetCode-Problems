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
    void getInorder(TreeNode* root,vector<int>& v){
       if(root == NULL) return;

       getInorder(root -> left,v);
       v.push_back(root -> val);
       getInorder(root -> right,v);
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        getInorder(root,ans);
        int mini = INT_MAX;

        for(int i = 1; i < ans.size();i++){
            mini = min(mini,abs(ans[i]-ans[i-1]));
        }

        return mini;

    }
};