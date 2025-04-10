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
    void inOrderTraversal(TreeNode* root){
        if(root==nullptr){
            return;
        }

        inOrderTraversal(root->left);
        vals.push_back(root->val);
        inOrderTraversal(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        inOrderTraversal(root);
        return vals[k-1];
    }

    std::vector<int> vals;
};