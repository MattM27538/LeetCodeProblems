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
    TreeNode* searchBST(TreeNode* root, int &val) {
        /*Traverse tree recursively. If node value is greater that val go left
          otherwise go right. If the direction attempted is null return NULL.
        */
        if(root->val>val){
            if(!root->left){return NULL;}
            return searchBST(root->left,val);
        } else if (root->val<val) {
            if(!root->right){return NULL;}
            return searchBST(root->right,val);
        }
        return root;
    }
};