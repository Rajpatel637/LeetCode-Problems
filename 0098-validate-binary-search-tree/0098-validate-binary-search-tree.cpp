// 0098. Validate Binary Search Tree
// Difficulty : Medium
// Topics     : Tree, Depth-First Search, Binary Search Tree, Binary Tree
// Runtime    : 0 ms  |  Memory : 22.2 MB
// Solved     : 2026-06-23
// Link       : https://leetcode.com/problems/validate-binary-search-tree/
// ---------------------------------------------------------

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
    void getCheck(TreeNode* root,vector<int>&v){
        if(root == NULL){
            return;
        }
        getCheck(root -> left,v);
        v.push_back(root -> val);
        getCheck(root -> right,v);
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        getCheck(root,v);
        for(int i = 1 ; i < v.size();i++){
            if(v[i-1] >= v[i]) return false;
        }
        return true;
    }
};