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
    int minDepth(TreeNode* root) {
        if(root==nullptr){
            return minimumDepth;
        }

        queue<TreeNode*> nodesOfTreeLevel{};
        nodesOfTreeLevel.push(root);
        auto nodesInLevel{1};
        ++minimumDepth;

        while(!nodesOfTreeLevel.empty()){
            //Iterate through each layer of Binary Tree.
            for(int i{0};i<nodesInLevel;++i){
                if(nodesOfTreeLevel.front()->left==nullptr && nodesOfTreeLevel.front()->right==nullptr){
                    return minimumDepth;
                }
                if(nodesOfTreeLevel.front()->left){
                    nodesOfTreeLevel.push(nodesOfTreeLevel.front()->left);
                }
                if(nodesOfTreeLevel.front()->right){
                    nodesOfTreeLevel.push(nodesOfTreeLevel.front()->right);
                }

                nodesOfTreeLevel.pop();
            }

            nodesInLevel=nodesOfTreeLevel.size();
            std::cout<<nodesInLevel<<" ";
            ++minimumDepth;
        }

        return minimumDepth;
    }

    int minimumDepth{0};
};