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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        if(!root1 && !root2){return ans;}
        if(root1){treeNodes.push(root1);}
        if(root2){treeNodes.push(root2);}
        //Traverse available trees and push nodes values to queue treeNodes.
        while(!treeNodes.empty()){
            TreeNode *currentNode=treeNodes.front();
            ans.push_back(currentNode->val);
            if(currentNode->left){treeNodes.push(currentNode->left);}
            if(currentNode->right){treeNodes.push(currentNode->right);}
            treeNodes.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
private:
    queue<TreeNode*> treeNodes;
};