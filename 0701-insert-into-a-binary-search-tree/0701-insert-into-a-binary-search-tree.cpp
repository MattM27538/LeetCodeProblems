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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            root=new TreeNode(val);
        }
        else{
            //If root val is greater than val go to left child node.
            if((root->val)>val){
                root->left=insertIntoBST(root->left,val);
            }
            //Go to right child node.
            else {
                root->right=insertIntoBST(root->right,val);
            }
        }

        return root;
    }
};