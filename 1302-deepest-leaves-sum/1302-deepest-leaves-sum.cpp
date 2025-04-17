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
    int deepestLeavesSum(TreeNode* root) {
        auto nodesInLevel{1};
        auto sumOfLevel{0};
        queue<TreeNode*> treeLevelQueue;
        treeLevelQueue.push(root);

        while(!treeLevelQueue.empty()){
            sumOfLevel=0;

            //Add nodes of next level to queue. Sum and remove nodes from current level.
            for(int i{0};i<nodesInLevel;++i){
                if(treeLevelQueue.front()->left!=nullptr){
                    treeLevelQueue.push(treeLevelQueue.front()->left);
                }

                if(treeLevelQueue.front()->right!=nullptr){
                    treeLevelQueue.push(treeLevelQueue.front()->right);
                }

                sumOfLevel+=treeLevelQueue.front()->val;
                treeLevelQueue.pop();
            }
            nodesInLevel=treeLevelQueue.size();
        }

        return sumOfLevel;
    }
};