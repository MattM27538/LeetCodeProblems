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
    int getMinimumDifference(TreeNode* root) {
        treeNodes.push(root);
        //Add all values of tree nodes to a vector.
        while(!treeNodes.empty()){
            TreeNode* currentNode=treeNodes.front();
            if(currentNode->right){treeNodes.push(currentNode->right);}
            if(currentNode->left){treeNodes.push(currentNode->left);}
            nodeVals.push_back(currentNode->val);
            treeNodes.pop();
        }
        //Sort values vector and iterate through vector checking
        //each index against it's adjacent index to find smallest difference.
        sort(nodeVals.begin(),nodeVals.end());
        int smallestDifference=INT_MAX;
        for(int i=0; i<nodeVals.size()-1;++i){
            if((nodeVals[i+1]-nodeVals[i])<smallestDifference){
                smallestDifference=nodeVals[i+1]-nodeVals[i];
            }
        }
        return smallestDifference;
    }
private:
    queue<TreeNode*> treeNodes;
    vector<int> nodeVals;
};