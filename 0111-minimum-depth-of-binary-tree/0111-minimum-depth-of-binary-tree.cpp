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
        auto minimumDepth{0};
        auto nodesInLevel{1};
        
        if(root==nullptr){
            return minimumDepth;
        }

        queue<TreeNode*> nodesOfTreeLevel{};
        nodesOfTreeLevel.push(root);
        ++minimumDepth;

        while(!nodesOfTreeLevel.empty()){
            //Iterate through each layer of Binary Tree and return minimum depth.
            for(int i{0};i<nodesInLevel;++i){
                TreeNode* tempNode{nodesOfTreeLevel.front()};
                if(tempNode->left==nullptr && tempNode->right==nullptr){
                    return minimumDepth;
                }
                if(tempNode->left){
                    nodesOfTreeLevel.push(tempNode->left);
                }
                if(tempNode->right){
                    nodesOfTreeLevel.push(tempNode->right);
                }

                nodesOfTreeLevel.pop();
            }

            nodesInLevel=nodesOfTreeLevel.size();
            std::cout<<nodesInLevel<<" ";
            ++minimumDepth;
        }

        return minimumDepth;
    }

};