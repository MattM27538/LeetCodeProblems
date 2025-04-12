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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>levelOrderTraversal={};
        
        if(root==nullptr){
            return levelOrderTraversal;
        }

        queue<TreeNode*>treeNodeQueue={};
        treeNodeQueue.push(root);

        while(!treeNodeQueue.empty()){
            int sizeOfCurrentLevel=treeNodeQueue.size();
            vector<int>levelValues={};
            
            //Add nodes from each level to vector annd push vector to levelOrderTraversal;
            for(int i={0};i<sizeOfCurrentLevel;++i){
                TreeNode *node=treeNodeQueue.front();
                treeNodeQueue.pop();

                if(node->left!=nullptr){
                    treeNodeQueue.push(node->left);
                }
                if(node->right!=nullptr){
                    treeNodeQueue.push(node->right);
                }

                levelValues.push_back(node->val);
            }

            levelOrderTraversal.push_back(levelValues);
        }

        return levelOrderTraversal;
    }
};