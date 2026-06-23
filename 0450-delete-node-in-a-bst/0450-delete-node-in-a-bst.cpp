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
    
    TreeNode* minValue(TreeNode* root){
       TreeNode* temp = root;
       while(temp -> left != NULL) temp = temp -> left;

       return temp;
    }

    TreeNode* getSolve(TreeNode* & root,int key){
      
      if(root == NULL){
            return root;
        }

        if(root -> val == key){
            if(root -> left == NULL && root -> right == NULL){
                delete root;
                return NULL;
            }
            if(root -> left != NULL && root -> right == NULL){
                TreeNode* temp = root -> left;
                delete root;
                return temp;
            }

            if(root -> left == NULL && root -> right != NULL){
                TreeNode* temp = root -> right;
                delete root;
                return temp;
            }

            if(root -> left != NULL && root -> right != NULL){
                int mini = minValue(root -> right) -> val;
                root -> val = mini;
                root -> right = getSolve(root -> right,mini);
                return root;
            }
        }
        else if(root -> val > key){
            root -> left = getSolve(root -> left,key);
            return root;
        }
        else{
            root -> right =  getSolve(root -> right,key);
            return root;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return root;
        TreeNode* ans = getSolve(root,key);
        return ans;
        
    }
};