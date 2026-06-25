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

    TreeNode* getRoot(vector<int>& nums,int s ,int e){
        if(s > e) return NULL;
        
        int mid =  s + (e-s)/2;
        TreeNode* newRoot = new TreeNode(nums[mid]);
        newRoot -> left = getRoot(nums,s,mid-1);
        newRoot -> right = getRoot(nums,mid+1,e);
        return newRoot;
    } 

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;

        return getRoot(nums,s,e);


    }
};